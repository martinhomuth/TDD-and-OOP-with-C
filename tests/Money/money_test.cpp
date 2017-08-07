#include "CppUTest/TestHarness.h"

extern "C" {
	#include "Dollar.h"
	#include "new.h"
	#include "object.h"
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
	void *five = m_new(Dollar, 5);
	times(five, 2);
	CHECK_EQUAL(10, amount(five));
}
