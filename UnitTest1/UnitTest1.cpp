#include "pch.h"
#include "CppUnitTest.h"
#include "../Project3/Source.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		TEST_METHOD(TestMethod1)
		{
			cout << "binarty = " << to_binary_string(5) << endl;
		 Assert::AreEqual(to_binary_string(5), to_binary_string(5));

		}
		TEST_METHOD(TestMethod2)
		{
			cout << "eight = " << octal_string(6) << endl;
			Assert::AreEqual(octal_string(6), octal_string(6));

		}
		
	};
}
