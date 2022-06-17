#include "pch.h"
#include "CppUnitTest.h"
#include "../Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Elem* first = NULL;
			int s = 1;
			Assert::AreEqual(0, Count(first, s));
		}
	};
}
