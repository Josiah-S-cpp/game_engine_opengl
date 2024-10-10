//x11
#include<X11/X.h>
#include<X11/Xlib.h>

//Open Gl
#include<GL/gl.h>
#include<GL/glx.h>
#include<GL/glu.h>
//My personal libs


typedef struct {
    float x;
    float y;
    float z;
}vector3;
typedef struct{
    int x;
    int y;
}Pos2dI;



#include "libs.h"
//my engine stuff
#include "keyboard.h"
#include "window.cpp"
#include "event.cpp"
#include "obects.cpp"
#include "engine2d.cpp"

