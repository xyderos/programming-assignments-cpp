#include <cppunit/TestAssert.h>

#include "../src/assignment.h"
#include "test_assignment.h"

void
test_assignment::test_quantrant_should_produce_valid_result()
{
	std::vector<int> input { -1, 2, 1, -4 };
	int target = 1;

	auto result = quantrant(input, target);

	auto expected = 2;

	CPPUNIT_ASSERT_EQUAL(expected, result);
}
