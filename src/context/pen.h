#ifndef CONTEXT_PEN_H
#define CONTEXT_PEN_H
#include "base.h"

#define PEN_MODE_HOLLOW 0x1
#define PEN_MODE_FILLED 0x2

void pen_color(context* c, color co);
void pen_clear(context* c);
void pen_mode(context* c, uint32 mode);

bool pen_is_down(context*  c);
void pen_down(context* c);
void pen_up(context* c);

void pen_goto(context* c, float x, float y);
void pen_goto_with_color(context* c, float x, float y, color co);
void pen_move(context* c, float step);
void pen_rotate(context* c, angle a);

void pen_rect(context* c, rect r);
void pen_line(context* c, float x1, float y1, float x2, float y2);
void pen_dot(context* c, float x, float y);

void pen_pixel(context* c, float x, float y);
void pen_pixel_line(context* c, float x1, float y1, float x2, float y2);
void pen_pixel_rect(context* c, rect r);

void pen_oval(context* c, float x, float y, float radius_x, float radius_y);
void pen_circle(context* c, float x, float y, float radius);
void pen_triangle_colored(context* c,
                            float x1, float y1, color c1,
                            float x2, float y2, color c2,
                            float x3, float y3, color c3
                         ); 
void pen_triangle(context* c,
                            float x1, float y1,
                            float x2, float y2,
                            float x3, float y3
                ); 

#endif