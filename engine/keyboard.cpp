class Keyboard
{
    public:
    Keylist K_down;    
        void keyUp(KeySym key){
            char* key_s = XKeysymToString(key);
            if(strlen(key_s) == 1){
                switch(key_s[0]){
                    case 'a':
                        K_down.a = false;
                        break;
                    case 'b':
                        K_down.b = false;
                        break;
                    case 'c':
                        K_down.c = false;
                        break;
                    case 'd':
                        K_down.d = false;
                        break;
                    case 'e':
                        K_down.e = false;
                        break;
                    case 'f':
                        K_down.f = false;
                        break;
                    case 'g':
                        K_down.g = false;
                        break;
                    case 'h':
                        K_down.h = false;
                        break;
                    case 'i':
                        K_down.i = false;
                        break;
                    case 'j':
                        K_down.j = false;
                        break;
                    case 'k':
                        K_down.k = false;
                        break;
                    case 'l':
                        K_down.l = false;
                        break;
                    case 'm':
                        K_down.m = false;
                        break;
                    case 'n':
                        K_down.n = false;
                        break;
                    case 'o':
                        K_down.o = false;
                        break;
                    case 'p':
                        K_down.p = false;
                        break;
                    case 'q':
                        K_down.q = false;
                        break;
                    case 'r':
                        K_down.r = false;
                        break;
                    case 's':
                        K_down.s = false;
                        break;
                    case 't':
                        K_down.t = false;
                        break;
                    case 'u':
                        K_down.u = false;
                        break;
                    case 'v':
                        K_down.v = false;
                        break;
                    case 'w':
                        K_down.w = false;
                        break;
                    case 'x':
                        K_down.x = false;
                        break;
                    case 'y':
                        K_down.y = false;
                        break;
                    case 'z':
                        K_down.z = false;
                        break;

                    default:
                        break;
                }
            }
        }
        void keyDown(KeySym key){
            char* key_s = XKeysymToString(key);
            //std::cout << key_s << std::endl;
            if(strlen(key_s) == 1){
                //std::cout << "one letter" << std::endl;
                switch(key_s[0]){
                case 'a':
                    K_down.a = true;
                    break;
                case 'b':
                    K_down.b = true;
                    break;
                case 'c':
                    K_down.c = true;
                    break;
                case 'd':
                    K_down.d = true;
                    break;
                case 'e':
                    K_down.e = true;
                    break;
                case 'f':
                    K_down.f = true;
                    break;
                case 'g':
                    K_down.g = true;
                    break;
                case 'h':
                    K_down.h = true;
                    break;
                case 'i':
                    K_down.i = true;
                    break;
                case 'j':
                    K_down.j = true;
                    break;
                case 'k':
                    K_down.k = true;
                    break;
                case 'l':
                    K_down.l = true;
                    break;
                case 'm':
                    K_down.m = true;
                    break;
                case 'n':
                    K_down.n = true;
                    break;
                case 'o':
                    K_down.o = true;
                    break;
                case 'p':
                    K_down.p = true;
                    break;
                case 'q':
                    K_down.q = true;
                    break;
                case 'r':
                    K_down.r = true;
                    break;
                case 's':
                    K_down.s = true;
                    break;
                case 't':
                    K_down.t = true;
                    break;
                case 'u':
                    K_down.u = true;
                    break;
                case 'v':
                    K_down.v = true;
                    break;
                case 'w':
                    K_down.w = true;
                    break;
                case 'x':
                    K_down.x = true;
                    break;
                case 'y':
                    K_down.y = true;
                    break;
                case 'z':
                    K_down.z = true;
                    break;

                default:
                    break;
                }
            }   
        }
};