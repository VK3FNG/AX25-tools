// generated by Fast Light User Interface Designer (fluid) version 1.00

#ifndef xfhdlcchpar_h
#define xfhdlcchpar_h
#include <FL/Fl.H>
#include <FL/Fl_Window.H>
extern Fl_Window *chpar;
#include <FL/Fl_Box.H>
#include <FL/Fl_Value_Slider.H>
extern void cb_update(Fl_Widget*, void*);
extern void cb_update(Fl_Value_Slider*, void*);
extern Fl_Value_Slider *txdelay;
extern Fl_Value_Slider *txtail;
extern Fl_Value_Slider *slottime;
extern Fl_Value_Slider *ppersist;
#include <FL/Fl_Check_Button.H>
extern void cb_update(Fl_Check_Button*, void*);
extern Fl_Check_Button *fulldup;
#include <FL/Fl_Button.H>
extern void cb_quit(Fl_Button*, long);
extern Fl_Button *quit;
#include <FL/Fl_Output.H>
extern Fl_Output *ifname;
Fl_Window* create_the_forms();
#endif
