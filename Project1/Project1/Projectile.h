#ifndef _PROJECTILE_H_
#define __PROJECTILE_H__

#include <stdio.h>

#include "Point2d.h"

class Projectile :  Point2f
{

private:
	
	Point2f point, speed;

public:

	Projectile(){

		point.x = point.y = speed.x = speed.y = 0.0f;

	}
	
	~Projectile(){};


	Projectile GetCurrentPosition(const float time){

		Point2f tmp;

		tmp.x = point.x + (speed.x * time);
		tmp.y = point.y + (speed.y * time);

		point.x = tmp.x;
		point.y = tmp.y;

	}

	

	

};


#endif // !_PROJECTILE_H_



