#include <cppunit/TestAssert.h>

#include "../src/assignment.h"
#include "test_assignment.h"

void
test_assignment::test_water_single_input()
{
	auto result = water({ 1, 8, 6, 2, 5, 4, 8, 3, 7 });

	CPPUNIT_ASSERT_EQUAL(result, 49);
}

void
test_assignment::test_water_complex_input()
{
	auto result = water({ 1, 1 });

	CPPUNIT_ASSERT_EQUAL(result, 1);
}
