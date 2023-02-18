#include <cppunit/TestAssert.h>

#include "../src/assignment.h"
#include "test_assignment.h"

static auto
containers_have_the_same_content(const std::set<std::vector<int>> &c1,
    const std::set<std::vector<int>> &c2) -> bool
{
	std::set<std::vector<int>> s1, s2;

	for (std::vector<int> e : c1) {
		std::sort(e.begin(), e.end());
		s1.emplace(e);
	}

	for (std::vector<int> e : c2) {
		std::sort(e.begin(), e.end());
		s2.emplace(e);
	}

	if (s1.size() != s2.size()) {
		return false;
	}

	for (const std::vector container : s1) {
		if (!s2.contains(container)) {
			return false;
		}
	}

	return true;
}

void
test_assignment::test_unique_quadruplets()
{
	std::vector<int> input { 1, 0, -1, 0, -2, 2 };
	int target = 0;

	auto result = four_sum(input, target);

	auto expected = std::set<std::vector<int>> { { -2, -1, 1, 2 },
		{ -2, 0, 0, 2 }, { -1, 0, 0, 1 } };

	CPPUNIT_ASSERT(containers_have_the_same_content(result, expected));
}
