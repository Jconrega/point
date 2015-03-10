#ifndef __Point2f_H__
#define __Point2f_H__

template <class TYPE>

class Point2f
{
public:

	bool isZero() const
	{
		return x == 0.0f && y == 0.0f;
	}

	void negatePoint()
	{
		x = -x;
		y = -y;		
	}
	void setZero(){

		x = 0.0f;
		y = 0.0f;
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
		Point2f tmp;
		tmp.x = a.x - x;
		tmp.y = a.y - y;

		return tmp;
	}

public:
	float x, y;

};
#endif