#include "assignment.h"

#include <algorithm>

static auto
contains_permutation(std::vector<int> v1, std::set<std::vector<int>> &v) -> bool
{

	bool cond = false;

	std::for_each(v.begin(), v.end(), [&](std::vector<int> vec) {
		if (cond) {
			return;
		}
		if (std::is_permutation(vec.begin(), vec.end(), v1.begin(),
			v1.end())) {
			cond = true;
		}
	});

	return cond;
}

auto
four_sum(const std::vector<int> &array, int target)
    -> std::set<std::vector<int>>
{
	std::set<std::vector<int>> result;

	for (uint i = 0; i < array.size(); i++) {
		for (uint j = 0; j < array.size(); j++) {
			for (uint k = 0; k < array.size(); k++) {
				for (uint l = 0; l < array.size(); l++) {
					std::vector<int> tmp { array.at(i),
						array.at(j), array.at(k),
						array.at(l) };

					if (
					    // less than the size
					    (i < array.size() &&
						j < array.size() &&
						k < array.size() &&
						l < array.size()) &&
					    // distinct positions
					    (i != j && i != k && i != l &&
						j != k && j != l && l != k) &&
					    (array.at(i) + array.at(j) +
						    array.at(k) + array.at(l) ==
						target) &&
					    !contains_permutation(tmp,
						result)) {
						result.insert({ array.at(i),
						    array.at(j), array.at(k),
						    array.at(l) });
					}
				}
			}
		}
	}
	return result;
}
