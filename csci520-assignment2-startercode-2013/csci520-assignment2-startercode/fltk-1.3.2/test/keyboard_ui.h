// generated by Fast Light User Interface Designer (fluid) version 1.0302

#ifndef keyboard_ui_h
#define keyboard_ui_h
#include <FL/Fl.H>
#include "keyboard.h"
extern MyWindow *my_window;
#include <FL/Fl_Button.H>
extern void key_cb(Fl_Button*, void*);
extern void shift_cb(Fl_Button*, void*);
#include <FL/Fl_Output.H>
extern Fl_Output *key_output;
#include <FL/Fl_Box.H>
extern Fl_Output *text_output;
#include <FL/Fl_Dial.H>
extern void wheel_cb(Fl_Dial*, void*);
extern Fl_Dial *roller_x;
extern Fl_Dial *roller_y;
MyWindow* make_window();
#endif
