#include "pch.h"
#include "CppUnitTest.h"
#include "..\\UnitTestsProject\Functions.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int x = 5;
			int y = 10;
			Assert::AreEqual(15, func1(x, y));
		}

		TEST_METHOD(TestMethod2)
		{
			int x = 10;
			int y = 5;
			Assert::AreEqual(5, func2(x, y));
		}

		TEST_METHOD(TestMethod3)
		{
			int x = 10;
			int y = 5;
			Assert::AreEqual(50, func3(x, y));
		}
	};
}
