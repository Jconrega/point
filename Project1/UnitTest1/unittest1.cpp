#include "stdafx.h"
#include "CppUnitTest.h"
#include "../Project1/Point2d.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestPint2d)
		{
			// TODO: Agregar aquí el código de la prueba
			Point2d point;
			point.setZero();
			Assert::IsTrue(point.comprobarZero());//els dos punts criden a un metode estatic
		}

	};
}