#ifndef _GEOMETRIA_PROYECTIVA_SHAPES_H_
#define _GEOMETRIA_PROYECTIVA_SHAPES_H_

#include "GLInclude.h"
#include "math3d.h"
#include <vector>

typedef struct {
	std::vector<VECTOR3D> P;
} LINE;


void drawDot(VECTOR3D position, float sradius = 1, COLOUR color = grey);

//TODO
void drawLine(LINE line, COLOUR color = grey, bool doDrawDots = false);
void drawAxis();




#endif
