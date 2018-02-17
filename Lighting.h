#pragma once

#include ".\include\glut.h"	
#include "Vector3f.h"


class CLighting
{
public:
	void SetDefaultLighting(); //Create Lighting Effects

	// Can create other lighting methods here
	void SetLights(CVector3f p0, CVector3f p1, CVector3f p2);

private:

};

