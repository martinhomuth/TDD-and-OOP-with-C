#include "CppUTest/TestHarness.h"

extern "C" {

}

TEST_GROUP(Money)
{
	void setup()
	{
		;
	}

	void teardown()
	{
		;
	}
};

TEST(Money, testMultiplication)
{
	Dollar five = new Dollar(5);
	five.times(2);
	CHECK_EQUAL(10, five.amount);
}
