// https://leetcode.com/problems/surrounded-regions/

#include <cstddef>
#include <vector>
class graph_t {
    public:
	std::vector<std::vector<char>> adj;
	std::vector<std::vector<bool>> visited;
	std::size_t nof_columns, nof_rows;

	explicit graph_t(const std::vector<std::vector<char>> &edges);

	auto get_adjacent_nodes(const std::pair<int, int> &coordinates)
	    -> std::vector<std::pair<int, int>>;

	auto should_not_be_flipped(const std::pair<int, int> &coordinates)
	    -> bool;

	void bfs();
};
