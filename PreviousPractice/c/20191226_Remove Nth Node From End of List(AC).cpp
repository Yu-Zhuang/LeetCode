


**solution I:**
struct ListNode* removeNthFromEnd(struct ListNode* head, int n){
    struct ListNode *position=head, *ret=head;
    int count=0, tmp=n;
    
    while(head!=NULL){
        if(n<0) position=position->next;
        head=head->next;
        n--; count++;
    }
    
    if(count==tmp) ret=ret->next;
    else position->next=position->next->next;
    return ret;
}

**solution II:**
struct ListNode* removeNthFromEnd(struct ListNode* head, int n){
    struct ListNode *last=(struct ListNode *)malloc(sizeof(struct ListNode));
    last=NULL;
    while(head!=NULL){ //reversehead
        struct ListNode *next=head->next;
        head->next=last;
        last=head;
        head=next;
    }
    
    struct ListNode *ret=last; //deleteelement
    if(n==1) {ret=ret->next;}
    else if(n>1){for(int i=0;i<n-2;i++) last=last->next;
    last->next=last->next->next;}
    
    last=NULL; //reverseagain;
    while(ret!=NULL){
        struct ListNode *next=ret->next;
        ret->next=last;
        last=ret;
        ret=next;
    } ret=last;

    return ret;
}



/*
Share
Given a linked list, remove the n-th node from the end of list and return its head.

Example:

Given linked list: 1->2->3->4->5, and n = 2.

After removing the second node from the end, the linked list becomes 1->2->3->5.
Note:

Given n will always be valid.

Follow up:

Could you do this in one pass?
*/

