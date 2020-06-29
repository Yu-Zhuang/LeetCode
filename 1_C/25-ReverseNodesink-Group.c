/*
25. Reverse Nodes in k-Group
Given a linked list, reverse the nodes of a linked list k at a time and return its modified list.
k is a positive integer and is less than or equal to the length of the linked list. If the number of nodes is not a multiple of k then left-out nodes in the end should remain as it is.
Example:
Given this linked list: 1->2->3->4->5
For k = 2, you should return: 2->1->4->3->5
For k = 3, you should return: 3->2->1->4->5
Note:
Only constant extra memory is allowed.
You may not alter the values in the list's nodes, only nodes itself may be changed.
*/

struct ListNode* reverseKGroup(struct ListNode* head, int k){
    // don't need to reverse when k < 2
    if(k < 2) 
        return head;
    // variable ( return_Node, pre_start_node, stack , stack_position )
    struct ListNode *ret = head, \
                    *preS = head;
    int *stack = (int*)malloc(sizeof(int)*k), \
        s_posi = k;
    // algorithm
    while(head){
        // if stack is not full => put current val to stack and go to next node
        if(s_posi != 0){ 
            s_posi -= 1;
            stack[s_posi] = head->val;
            head = head->next;
        }
        // if stack is full => assign k preNode (from pre_start) to stack.pop()
        if(s_posi==0){
            do{
                preS->val = stack[s_posi];
                preS = preS->next;
                s_posi += 1;
            }while(s_posi != k);
        }
    }

    free(stack);
    return ret;
}
/*
Runtime: 4 ms, faster than 96.92% of C online submissions for Reverse Nodes in k-Group.
Memory Usage: 6.8 MB, less than 6.59% of C online submissions for Reverse Nodes in k-Group.*/

