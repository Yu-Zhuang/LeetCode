/*
2. Add Two Numbers
You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order and each of their nodes contain a single digit. Add the two numbers and return it as a linked list.
You may assume the two numbers do not contain any leading zero, except the number 0 itself.
Example:

Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
Output: 7 -> 0 -> 8
Explanation: 342 + 465 = 807.
*/
/**
 * Definition for singly-linked list.
 * function ListNode(val) {
 *     this.val = val;
 *     this.next = null;
 * }
 */
/**
 * @param {ListNode} l1
 * @param {ListNode} l2
 * @return {ListNode}
 */
var addTwoNumbers = function(l1, l2) {
    if(l1.val == undefined) return l2;
    else if(l2.val == undefined) return l1;
    
    let ret = new ListNode(0);
    let ptr = ret;
    let sum=0, tmp=0;
    
    while(l1!=null || l2!=null ||sum>0){
    	if(l1!=null) { sum+=l1.val; l1=l1.next; }
    	if(l2!=null) { sum+=l2.val; l2=l2.next; }
    	if(sum>9) { tmp=1; sum-=10; }
    	ptr.next = new ListNode(sum);
    	ptr=ptr.next;
    	sum=tmp;
    	tmp=0;
    }
    return ret.next;
};
/*
result:
Runtime: 104 ms, faster than 94.68% of JavaScript online submissions for Add Two Numbers.
Memory Usage: 38.3 MB, less than 76.39% of JavaScript online submissions for Add Two Numbers.
*/