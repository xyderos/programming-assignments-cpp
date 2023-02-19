#include <cppunit/TestAssert.h>

#include "../src/assignment.h"
#include "test_assignment.h"

void
test_assignment::test_reverse_integer_positive()
{
	auto result = reverse_integer(123);

	CPPUNIT_ASSERT(result == 321);
}

void
test_assignment::test_reverse_integer_negative()
{
	auto result = reverse_integer(-123);

	CPPUNIT_ASSERT(result == -321);
}

void
test_assignment::test_reverse_integer_trailing_zeroes()
{
	auto result = reverse_integer(120);

	CPPUNIT_ASSERT(result == 21);
}
