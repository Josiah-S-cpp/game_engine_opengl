

GLint att[] = { GLX_RGBA, GLX_DEPTH_SIZE, 24, GLX_DOUBLEBUFFER, None };

class window{
    public:
        Display *dis;
        Window   root;

        Window win;
        Pos2dI size;
        Color bgColor;
        GLXContext context;
        XSetWindowAttributes SetWindAttr;
        XVisualInfo *vi;
        Colormap colorMap;
        char *winname = "default";
        
        
        window(){
            size.x = 800;
            size.y = 400;
            init();

        }
        window(Pos2dI insize){
            size = insize;
            init();

        }
        window(int x, int y){
            size.x = x;
            size.y = y;
            init();
        }
        void init(){
            dis = XOpenDisplay(NULL); 
            root = DefaultRootWindow(dis);
            vi = glXChooseVisual(dis, 0, att);
            colorMap = XCreateColormap(dis, root, vi->visual, AllocNone);
            SetWindAttr.colormap = colorMap;
            SetWindAttr.event_mask = ExposureMask | KeyPressMask;

            win = XCreateWindow(dis, root, 0, 0, size.x, size.y, 0, vi->depth, InputOutput, vi->visual, CWColormap | CWEventMask, &SetWindAttr);
            context = glXCreateContext(dis, vi, NULL, GL_TRUE);
            
        }
        void open(){
            
            XMapWindow(dis, win);
            XStoreName(dis, win, winname);

            //context = glXCreateContext(dis, vi, NULL, GL_TRUE);
            glXMakeCurrent(dis, win, context);

            glEnable(GL_DEPTH_TEST); 
            glMatrixMode(GL_PROJECTION);
            glLoadIdentity();   
        }
        void clear(){
            glClearColor(1, 1, 1, 1.0);
            glClear( GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT );
        }
        void update(){
            glXSwapBuffers(dis, win);
            //XFlush(dis);
        }
};