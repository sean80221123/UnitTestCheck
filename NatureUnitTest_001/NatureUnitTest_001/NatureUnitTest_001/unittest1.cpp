#include "stdafx.h"
#include "CppUnitTest.h"
#include "../dllTest/dllTest/dllTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace NatureUnitTest_001
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			// TODO: Your test code here
			Assert::AreEqual(1, 1);
			float x = 5.0f;
			float y = 6.0f;

			cdllTest* l_pDllTest = new cdllTest();
			float ans = l_pDllTest->Average(x, y);

			Assert::AreEqual(5.5f, ans);
		}

	};
}