/*
24. Swap Nodes in Pairs
Given a linked list, swap every two adjacent nodes and return its head.
You may not modify the values in the list's nodes, only nodes itself may be changed.
Example:
Given 1->2->3->4, you should return the list as 2->1->4->3.
*/

struct ListNode* swapPairs(struct ListNode* head){
    if(head == NULL) 
    	return NULL;
    int tmp = 0;
    struct ListNode *ret = head;
    while(head && head->next){
    	tmp = head->val;
    	head->val = head->next->val;
    	head->next->val = tmp;
    	head = head->next->next;
    }
    return ret;
}
/*
Success
Details 
Runtime: 0 ms, faster than 100.00% of C online submissions for Swap Nodes in Pairs.
Memory Usage: 5.5 MB, less than 55.23% of C online submissions for Swap Nodes in Pairs.
*/