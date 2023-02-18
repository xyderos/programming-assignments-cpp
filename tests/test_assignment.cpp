#include <cppunit/TestAssert.h>

#include "../src/assignment.h"
#include "test_assignment.h"

void
test_assignment::test_count_and_say_single_input()
{

	auto result = count_and_say({ 3, 3, 2, 2, 2, 5, 1 });

	std::vector<std::pair<int, int>> expected {
		{ 1, 1 },
		{ 2, 3 },
		{ 3, 2 },
		{ 5, 1 },
	};

	CPPUNIT_ASSERT(expected == result);
}

void
test_assignment::test_count_and_say_nultiple_inputs()
{
	auto result = count_and_say({ 1 });

	std::vector<std::pair<int, int>> expected { { 1, 1 } };

	CPPUNIT_ASSERT(expected == result);
}
