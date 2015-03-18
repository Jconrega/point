#ifndef __Point2f_H__
#define __Point2f_H__

#include <math.h>
template <class TYPE>

class Point2f
{
public:

	bool isZero() const
	{
		return x == 0 && y == 0;
	}

	void negatePoint()
	{
		x = -x;
		y = -y;		
	}
	void setZero(){

		x = 0;
		y = 0;
	}

	Point2f operator+ (const Point2f& a) const
	{
		Point2f tmp;
		tmp.x = x + a.x;
		tmp.y = y + a.y;

		return tmp;
	}
	Point2f operator- (const Point2f& a) const
	{
		Point2f tmp;
		tmp.x = x - a.x;
		tmp.y = y - a.y;

		return tmp;
	}

	Point2f operator+= (const Point2f& a)
	{
		x += a.x;
		y += a.y;

		return *this;
	}
	Point2f operator-= (const Point2f& a)
	{
		x -= a.x;
		y -= a.y;

		return *this;
	}
	Point2f operator= (const Point2f& a)
	{
		x = a.x;
		y = a.y;

		return *this;
	}
	bool operator== (const Point2f& a)
	{
		return x == a.x && y == a.y;
	}
	bool operator!= (const Point2f& a)
	{
		return x != a.x || y != a.y;
	}
	Point2f DistanceToPoint(const Point2f& a)
	{
		return sqrt(pow(a.x - x, 2) + pow(a.y - y, 2));
	}

public:
	TYPE x, y;

};
#endif