#include "stdafx.h"
#include "CppUnitTest.h"
#include "..\Project1\Projectile.h"
#include "..\Project1\Strign.h"
#include "..\Project1\Point2d.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestExam
{
	TEST_CLASS(Projectile){
		
		TEST_METHOD(Projectile_test)
		{
			Projectile p;
			
			p.point.x = 10.0f;
			p.point.y = 10.0f;

			p.speed.x = 2.0f;
			p.speed.y = 0.0f;

			Point2f <float> current = p.GetCurrentPosition(3.0f);
			Assert::AreEqual((float)16.0f, current.x, 0.00001f);
			Assert::AreEqual((float)10.0f, current.y, 0.00001f);
		}
	}

	// String prefix ----------------------------------------
	TEST_CLASS(String_prefix){

		TEST_METHOD(Prefix)
		{
			String a("1234567890");
			String b(50);
			b = "hola";
			a.prefix(b);
			b.prefix("1234567890");
			Assert::AreEqual(strcmp(a.GetString(), "hola1234567890"), 0);
			Assert::AreEqual(strcmp(b.GetString(), "1234567890hola"), 0);
		}
	}
	
}