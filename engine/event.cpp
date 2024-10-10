
typedef struct{
    bool present = 0;
    void (*func)(XEvent);

}Event_Func;


class EventHandler{
    public:
        Display *dis;
        XEvent ev;
        Window win;
        Keyboard Kboard;
        //event functions
        Event_Func Handlers[100];
        EventHandler(){
        }
        EventHandler(Display *d,Window wind){
            dis = d;
            win = wind;
            XSelectInput(dis, win,KeyPressMask | KeyReleaseMask);
        };
        void install_Handler(int type,void (*func)(XEvent)){
            Handlers[type].present = true;
            Handlers[type].func = func;
        }
        void handle(){
            while (XPending(dis)){
                XNextEvent(dis, &ev);
                KeySym key = XKeycodeToKeysym(dis,ev.xkey.keycode,0);
                if(ev.type == KeyPress){
                    Kboard.keyDown(key);
                } else if (ev.type == KeyRelease){
                    Kboard.keyUp(key);
                }
                if(Handlers[ev.type].present){
                    Handlers[ev.type].func(ev);
                }
            }
        }
    
};