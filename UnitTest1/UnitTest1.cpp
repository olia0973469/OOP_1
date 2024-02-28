#include "pch.h"
#include "CppUnitTest.h"
#include "../../oop.1/oop.1/IntRange.h"
#include "../../oop.1/oop.1/IntRange.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			IntRange n;
			n.setfirst(2);
			n.setsecond(7);
			int f = n.getFirst();
			int s = n.getSecond();
			Assert::AreEqual(2, f);
			Assert::AreEqual(7, s);
		}
	};
}
