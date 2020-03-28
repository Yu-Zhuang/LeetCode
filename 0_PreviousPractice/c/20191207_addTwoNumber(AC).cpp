


struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
    struct ListNode* result = (struct ListNode*) malloc(sizeof(struct ListNode));
    struct ListNode *head = result;
    int carrybit=0;
    int sum;
    while(l1 || l2){ //end when both lists are null
        if(l1==NULL){
            sum=l2->val+carrybit;
            l2=l2->next;
        }else if(l2==NULL){
            sum=l1->val+carrybit;
            l1=l1->next;
        }else{
            sum = (l1->val + l2->val + carrybit);
            l1=l1->next;
            l2=l2->next;
        }
        if(sum>=10)
            carrybit=1; //determine carry
        else
            carrybit=0;
        result->val = sum % 10;// take out ones position
        if((l1 || l2)){
            result->next = (struct ListNode*)malloc(sizeof(struct ListNode)); //malloc next only if l1 and l2 are not NULL
            result = result->next;
        }
    }
    if(carrybit){ //for the last possible carry bit
        result->next = (struct ListNode*)malloc(sizeof(struct ListNode));
        result->next->val = 1;
        result->next->next = NULL;
    }else
        result->next = NULL;
    return head;
}

/*
You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order and each of their nodes contain a single digit. Add the two numbers and return it as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.

Example:

Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
Output: 7 -> 0 -> 8
Explanation: 342 + 465 = 807.
*/

