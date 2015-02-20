#ifndef _Point2d_H_
#define _Point2d_H_

class Point2d{

public:

	void setZero(){
		x = y = 0.0f;


	}
	bool comprobarZero() const {

		return x == 0.0f && y == 0.0f; 
	}

	void negatePoint() {
		
		x = -x;
		y = -y;
	}
	Point2d operator+ (const Point2d& a) const
	{
		Point2d tmp;
		tmp.x = x + a.x;
		tmp.y = y + a.y;

		return tmp;
	}
public:
	float x, y;
};

#endif //_Point2d_H_		

