#include <cppunit/TestAssert.h>

#include "../src/assignment.h"
#include "test_assignment.h"

void
test_assignment::test_division_negative()
{
	auto result = divide(10, 3);

	CPPUNIT_ASSERT_EQUAL(3, result);
}

void
test_assignment::test_division_positive()
{
	auto result = divide(7, -3);

	CPPUNIT_ASSERT_EQUAL(-2, result);
}
