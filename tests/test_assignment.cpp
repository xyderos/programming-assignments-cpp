#include <cppunit/TestAssert.h>

#include "../src/assignment.h"
#include "test_assignment.h"

void
test_assignment::first_test()
{

	auto result = permutations({ 1, 2, 3 });

	std::vector<std::vector<int>> expected = { { 1, 2, 3 }, { 1, 3, 2 },
		{ 2, 1, 3 }, { 2, 3, 1 }, { 3, 1, 2 }, { 3, 2, 1 } };

	CPPUNIT_ASSERT(expected == result);
}

void
test_assignment::second_test()
{

	auto result = permutations({ 1, 0 });

	std::vector<std::vector<int>> expected = { { 0, 1 }, { 1, 0 } };
	CPPUNIT_ASSERT(expected == result);
}
