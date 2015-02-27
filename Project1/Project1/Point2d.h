#ifndef __Point2f_H__
#define __Point2f_H__

class Point2f
{
public:

	//No es necessari escriure ni el constructor ni el destructor perquè es creen automàticament.

	void setZero()
	{
		x = y = 0.0f; //En una assignació es retorna el valor assignat. 

		/*
		if(x=0.f) Això es possible. El if no entra quan es 0, amb tots els altres valors sí.
		{
		}
		*/
	}


	bool isZero() const
	{
		return x == 0.0f && y == 0.0f;
	}

	void negatePoint()
	{
		x = -x;
		y = -y;
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


public:
	float x, y;




};
#endif