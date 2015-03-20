#ifndef __Point2f_H__
#define __Point2f_H__


//template <class TYPE>

class Point2f
{
public:

	bool isZero() const{};

	void negatePoint() {};

	void setZero(){};

	Point2f operator+ (const Point2f& a) const{};

	Point2f operator- (const Point2f& a) const{};

	Point2f operator+= (const Point2f& a){};

	Point2f operator-= (const Point2f& a){};

	Point2f operator= (const Point2f& a){};

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

private:
	float x, y;

};
#endif