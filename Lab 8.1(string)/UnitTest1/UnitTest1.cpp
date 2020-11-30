#include "pch.h"
#include <string.h>
#include "CppUnitTest.h"
#include "../Lab 8.1(string)/Lab 8.1(string).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			string m= "if+-=will+be+like-+=function+will+-=not-work";
			int cnt = Count(m);
			Assert::AreEqual(cnt, 2);
		}
	};
}
