/*
23. Merge k Sorted Lists
Hard
Merge k sorted linked lists and return it as one sorted list. Analyze and describe its complexity.
Example:
Input:
[
  1->4->5,
  1->3->4,
  2->6
]
Output: 1->1->2->3->4->4->5->6
*/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* mergeKLists(struct ListNode** lists, int listsSize){
    if(!listsSize) return NULL;
	// alloct ret linked list
	struct ListNode *ret = (struct ListNode*)malloc(sizeof(struct ListNode));
	struct ListNode *rear = ret;
	ret->next = NULL;
	// check all lists have element or not
	int flag = 1, min_index=0;
	while(flag){
		flag = 0; 
		// go throuph all lists
		for(int i=0;i<listsSize;i++){
			// find "min element" in all "head of lists that have element"
			if(lists[i]){
				if(flag == 0) 
					{ min_index = i; flag = 1; }
				else if(lists[min_index]->val > lists[i]->val)
					min_index = i;	
			}	
		}
		if(flag){
			// create new_min_node
			struct ListNode *newnode = (struct ListNode*)malloc(sizeof(struct ListNode));
			newnode->val = lists[min_index]->val; 
			// add new_min_node into ret_linked_list
			newnode->next = rear->next;
			rear->next = newnode;
			rear = newnode;
			//
			lists[min_index] = lists[min_index]->next;
		}
	}
	return ret->next;
}
/*
Runtime: 460 ms, faster than 11.84% of C online submissions for Merge k Sorted Lists.
Memory Usage: 8.7 MB, less than 100.00% of C online submissions for Merge k Sorted Lists.
*/