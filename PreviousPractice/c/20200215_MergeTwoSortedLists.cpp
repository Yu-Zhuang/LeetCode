/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 else if(l1->val == l2->val){
				struct ListNode *newnode2=(struct ListNode*)malloc(sizeof(struct ListNode));
				newnode->val=l1->val; 
				newnode2->val=l2->val;
				newnode->next=newnode2;
				ptr->next=newnode;
				l1=l1->next; l2=l2->next;
			}
 */


struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2){
    if(!l1) return l2; else if(!l2) return l1;
	struct ListNode *ret=(struct ListNode*)malloc(sizeof(struct ListNode)),*ptr=ret;

	while(l1||l2){
		if(l1&&l2){
			struct ListNode *newnode=(struct ListNode*)malloc(sizeof(struct ListNode));
			if(l1->val >= l2->val){
				newnode->val=l2->val;
				l2=l2->next;
			}
			else{
				newnode->val=l1->val;
				l1=l1->next;
			}
			ptr->next=newnode;
			ptr=newnode;
		}
		else if(l1&&!l2) {ptr->next=l1; break;}
		else if(l2&&!l1) {ptr->next=l2; break;}
	}

	return ret->next;
}

/*
21. Merge Two Sorted Lists
Easy

3315

491

Add to List

Share
Merge two sorted linked lists and return it as a new list. The new list should be made by splicing together the nodes of the first two lists.

Example:

Input: 1->2->4, 1->3->4
Output: 1->1->2->3->4->4
*/





