#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>

#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab 8.1/Lab 8.1.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1iter
{
	TEST_CLASS(UnitTest1iter)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{

			char m [101] = "if+-=will+be+like-+=function+will+-=not-work";
			int cnt = Count(m);
			Assert::AreEqual(cnt, 2);
			Change(m);
			char s[101] = "if******will**be**like******function**will******not**work";
			Assert::AreEqual(m, s);

		}
		
	};
}
