


struct ListNode* reverseList(struct ListNode* head){
    struct ListNode *last;
    last=NULL;
    while(head){
        struct ListNode *next=head->next;
        head->next=last;
        last=head;
        head=next;
    }
    return last;
}

/*
Reverse a singly linked list.

Example:

Input: 1->2->3->4->5->NULL
Output: 5->4->3->2->1->NULL
Follow up:

A linked list can be reversed either iteratively or recursively. Could you implement both?
*/

