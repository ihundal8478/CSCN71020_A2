#include "pch.h"
#include "CppUnitTest.h"
#include "..\BCSRec\main.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace RectangleTests
{
	TEST_CLASS(RectangleTests)
	{
	public:
		TEST_METHOD(GetPerimeter_ValidInputs_CorrectOutput) //for testing getPerimeter
		{
			int length = 10;
			int width = 5;
			//calculations for perimeter:2*(10+5)=30
			int result_peri = getPerimeter(&length, &width);
			Assert::AreEqual(30, result_peri);
		}
		TEST_METHOD(GetArea_ValidInput_CorrectOutput) // for testing getArea
		{
			int length = 10;
			int width = 5;
			//calculations for area:10*5+50
			int result_area = getArea(&length, &width);
			Assert::AreEqual(50, result_area);
		}
		TEST_METHOD(SetLength_ValidInput_UpdatesLength) //for setting length to a mid range value
		{
			int length = 0; //setup of starting value
			int input = 50; // valid input (normal case)

			setLength(input, &length); // execution
			Assert::AreEqual(50, length); //length should be updated to 50

		}
		TEST_METHOD(SetLength_BoundaryLow_UpdatesLength) // for setting length to lower boundary value
		{
			int length = 0; // set up
			int input = 1; //test for lower boundary

			setLength(input, &length); //execution
			Assert::AreEqual(1, length); // length should be updated to 1
		}
		TEST_METHOD(SetLength_InvalidInput_DoesnotUpdatesLength)  // for setting length to an invalid value
		{
			int length = 0; // set up
			int input = -3;// test for invalid value

			setLength(input, &length); // execution
			Assert::AreEqual(0, length); // length should not be updated
		}
		TEST_METHOD(SetWidth_ValidInput_UpdatesWidth) //for setting width to a mid range value
		{
			int width = 0; //setup of starting value
			int input = 50; // valid input (normal case)

			setLength(input, &width); // execution
			Assert::AreEqual(50, width); //width should be updated to 50

		}
		TEST_METHOD(SetWidth_BoundaryLow_UpdatesWidth) // for setting width to lower boundary value
		{
			int width = 0; // set up
			int input = 1; //test for lower boundary

			setLength(input, &width); //execution
			Assert::AreEqual(1, width); // width should be updated to 1
		}
		TEST_METHOD(SetWidth_InvalidInput_DoesnotUpdatesWidth)  // for setting width to an invalid value
		{
			int width = 0; // set up
			int input = -3;// test for invalid value

			setLength(input, &width); // execution
			Assert::AreEqual(0, width); // width should not be updated
		}
	};
}