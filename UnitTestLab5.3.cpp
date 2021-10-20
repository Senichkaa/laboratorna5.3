#include "pch.h"
#include "CppUnitTest.h"
#include "..\pr.5.3\Source.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestLab53
{
	TEST_CLASS(UnitTestLab53)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t = p(0);
			Assert::AreEqual(1., t);
		}
	};
}
