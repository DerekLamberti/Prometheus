#include "stdafx.h"
#include "CppUnitTest.h"
#include "../Stream/Stream.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestStream
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int val = Pro::fnStream();
			Assert::AreEqual(42, val, L"Pro::fnStream() did not return the expected value of 42.");
		}

	};
}