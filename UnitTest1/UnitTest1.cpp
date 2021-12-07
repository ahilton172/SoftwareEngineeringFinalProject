#include "pch.h"
#include "CppUnitTest.h"
#include "../SoftwareEngineeringFinalProject/login.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			
			string name = "Andrew";
			signUp mc(name);
			Assert::AreEqual(name, mc.writeUserName());

		}
	};
}
