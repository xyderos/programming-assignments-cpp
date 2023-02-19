// https://leetcode.com/problems/remove-nth-node-from-end-of-list/

struct ListNode {
	int val;
	ListNode *next;
	ListNode()
	    : val(0)
	    , next(nullptr)
	{
	}
	ListNode(int x)
	    : val(x)
	    , next(nullptr)
	{
	}
	ListNode(int x, ListNode *next)
	    : val(x)
	    , next(next)
	{
	}
};

auto remove_nth_from_back(ListNode *head, int position) -> ListNode *;
