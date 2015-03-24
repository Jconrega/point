#include "stdafx.h"
#include "CppUnitTest.h"

#include "..\Project1\String.cpp"
#include "..\Project1\Strign.h"

TEST_CLASS(StringTest)
{
public:

	//Constructors

	TEST_METHOD(EmptyConst)
	{
		String s;

		Assert::IsTrue(s.capacity() == 1);
	}

	TEST_METHOD(CharCConst)
	{
		char* c = "hola";
		String s(c);

		Assert::IsTrue(s.capacity() == 5 && s.len() == 4 && strcmp(c, s.getString()) == 0);
	}

	TEST_METHOD(StringConst)
	{
		String s("hola");
		String s2(s);

		Assert::IsTrue(s.capacity() == 5 && s.len() == 4 && strcmp(s2.getString(), s.getString()) == 0);
	}
	TEST_METHOD(OperatorEqualEqualChar)
	{
		char* c = "hola";
		String s(c);

		Assert::IsTrue(s == c);
	}
	TEST_METHOD(OperatorEqualEqualString)
	{
		String s("hola");
		String s2("hola");

		Assert::IsTrue(s == s2);
	}
	TEST_METHOD(OperatorNotEqualChar)
	{
		char* c = "hola";
		String s("bye");

		Assert::IsTrue(s != c);
	}
	TEST_METHOD(OperatorNotEqualString)
	{
		String s("hola");
		String s2("bye");

		Assert::IsTrue(s != s2);
	}
	TEST_METHOD(OperatorEqualChar)
	{
		char* c = "hola";
		String s("bye");
		String s2;

		s = c;
		s2 = c;

		Assert::IsTrue(s == c && s2 == c);
	}
	TEST_METHOD(OperatorEqualString)
	{
		String r("hola");
		String s("bye");
		String s2;

		s = r;
		s2 = r;

		Assert::IsTrue(s == r && s2 == r);
	}

	TEST_METHOD(OperatorSumEqualChar)
	{

		String s("s");

		s += "hola";
		Assert::IsTrue(strcmp(s.getString(), "shola") == 0);
	}

	TEST_METHOD(OperatorSumEqualString)
	{

		String s("hey");
		String s2("bro");

		s += s2;

		Assert::IsTrue(strcmp(s.getString(), "heybro") == 0);
	}

	TEST_METHOD(Lenght)
	{
		String s("hola");

		Assert::IsTrue(s.len() == 4);
	}

	TEST_METHOD(Capacity)
	{
		String s("hola");

		Assert::IsTrue(s.capacity() == 5);
	}
	TEST_METHOD(GetString)
	{
		String s("hola");

		Assert::IsTrue(strcmp(s.getString(), "hola") == 0);
	}

	TEST_METHOD(Clear)
	{
		String s("hola");
		s.clear();
		Assert::IsTrue(s.capacity() == 1);
	}

};