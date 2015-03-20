#include "Point2d.h"
#include <stdio.h>
#include <math.h>

bool Point2f::isZero() const{
	
	return x == 0 && y == 0;
}

void Point2f::negatePoint(){

	x = -x;
	y = -y;
}
void Point2f::setZero(){
	
	x = 0;
	y = 0;
}

Point2f Point2f::operator+(const Point2f& a)const{

	Point2f tmp;
	tmp.x = x + a.x;
	tmp.y = y + a.y;

	return tmp;

}

Point2f Point2f::operator-(const Point2f& a)const{
	
	Point2f tmp;
	tmp.x = x - a.x;
	tmp.y = y - a.y;

	return tmp;
}

Point2f Point2f::operator+=(const Point2f& a){

	x += a.x;
	y += a.y;

	return *this;

}
Point2f Point2f::operator-=(const Point2f& a){

	x -= a.x;
	y -= a.y;

	return *this;

}
Point2f Point2f::operator=(const Point2f& a){

	x = a.x;
	y = a.y;

	return *this;
}
bool P operator== (const Point2f& a)