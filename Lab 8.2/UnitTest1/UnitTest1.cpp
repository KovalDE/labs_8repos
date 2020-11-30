#include "pch.h"
#include "CppUnitTest.h"
#include <string.h>
#include "../Lab 8.2/Lab 8.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			string str = "Dima want  to pass the   laboratory work";
			//                1    12  1    1   123          1
			int cnt = MaxLength(str);
			Assert::AreEqual(cnt, 3);
		}
	};
}
