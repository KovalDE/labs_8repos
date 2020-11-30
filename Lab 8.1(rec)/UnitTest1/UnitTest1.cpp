#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>

#include "pch.h"
#include "CppUnitTest.h"

#include "../Lab 8.1(rec)/Lab 8.1(rec).cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1iter
{
	TEST_CLASS(UnitTest1iter)
	{
	public:

		TEST_METHOD(TestMethod1)
		{

			char m[101] = "if+-=will+be+like-+=function+will+-=not-work";
			int cnt = Count(m,0);
			Assert::AreEqual(cnt, 2);
			char* dest1 = new char[151];
			dest1[0] = '\0';
			char* dest2;
			dest2 = Change(dest1, m, dest1, 0);
			char s[101] = "if******will**be**like******function**will******not**work";
			Assert::AreEqual(dest2, s);

		}

	};
}
