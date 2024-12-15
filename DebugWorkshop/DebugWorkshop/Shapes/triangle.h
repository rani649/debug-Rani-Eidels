#ifndef __TRIANGLE_H__
#define __TRIANGLE_H__

#include "shape.h"

class Triangle : virtual public Shape 
{
private:
	float _base;
	float _height;
public:
	Triangle(float base, float height);
	~Triangle();
	virtual float get_area() const;

};


#endif	// __TRIANGLE_H__
