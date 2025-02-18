#ifndef halo_h
#define halo_h

#ifndef glut_h
#include <GL/glut.h>
#define glut_h
#endif

#ifndef math_h
#include <math.h>
#define math_h
#endif

#ifndef string_h
#include <string.h>
#define string_h
#endif

#ifndef stdio_h
#include <stdio.h>
#define stdio_h
#endif

#ifndef PI
#define PI M_PI
#endif
#define RING_DIVISION 500
#define FULL_CIRCLE 2*PI

void display_halo(GLfloat radius, GLfloat width, GLfloat thickness);

void display_ring(GLfloat radius, GLfloat thickness, GLfloat y);

void halo_draw_triangle(GLfloat v[][3], int a, int b, int c);

void halo_draw_vertex(GLfloat v[][3], int a);

#endif