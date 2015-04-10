#include "stdafx.h"
#include "CppUnitTest.h"
#include "..\Project1\Point2d.h"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{		
	TEST_CLASS(Point2f)
	{
	public:
		
		TEST_METHOD(IsZero)
		{
			Point2f p1, p2, p3, p4;
			p1.x = 0;
			p1.y = 0;

			p2.x = 15;
			p2.y = 0;

			p3.x = 0;
			p3.y = 15;

			p4.x = 15;
			p4.x = 215;

			Assert::IsTrue(p1.isZero() && !p2.isZero() && !p3.isZero() && !p4.isZero());

		}
		TEST_METHOD(SetZero)
		{
			Point2f p1, p2;

			p1.x = 15;
			p1.y = 2;
			p1.setZero();

			p1.setZero();

			Assert::IsTrue(p1.isZero() && p1.isZero());

		}
		TEST_METHOD(DistanceTo)
		{
			Point2f p1, p2;
			p1.setZero();
			p2.x = 15;
			p2.y = 20;
			//no surt
			//Assert::IsTrue(p1.DistanceToPoint(p2) == 21);

		}

		//Operators

		TEST_METHOD(OperatorSum)
		{
			Point2f p1, p2, p3;
			p1.setZero();
			p2.x = 15;
			p2.y = 20;

			p3 = p + p2;

			Assert::IsTrue(p3.x == 15 && p3.y == 20);

		}

		TEST_METHOD(OperatorSubtraction)
		{
			Point2f p1, p2, p3;
			p1.setZero();
			p2.x = 15;
			p2.y = 20;

			p3 = p - p2;

			Assert::IsTrue(p3.x == -15 && p3.y == -20);

		}

		TEST_METHOD(OperatorSumEqual)
		{
			Point2f p1, p2;
			p1.x = 15;
			p1.y = 20;

			p2.x = 20;
			p2.y = 15;

			p1 += p2;

			Assert::IsTrue(p.x == 35 && p.y == 35);

		}

		TEST_METHOD(OperatorSubtractionEqual)
		{
			Point2f p1, p2;
			p1.x = 20;
			p1.y = 15;

			p2.x = 15;
			p2.y = 20;

			p1 -= p2;

			Assert::IsTrue(p1.x == 5 && p1.y == -5);

		}

		TEST_METHOD(OperatorEqual)
		{
			Point2f p1, p2, p3;
			p1.x = 20;
			p1.y = 15;

			p2.x = 20;
			p2.y = 15;

			p3.x = 15;
			p3.x = 15;

			Assert::IsTrue(p1 == p2);
			Assert::IsFalse(p1 == p3);

		}
		TEST_METHOD(OperatorNoEqual)
		{
			Point2f p1, p2, p3;
			p1.x = 20;
			p1.y = 15;

			p2.x = 20;
			p2.y = 15;

			p3.x = 15;
			p3.x = 15;

			Assert::IsTrue(p1 != p3);
			Assert::IsFalse(p1 != p2);

		}
	

	};
}