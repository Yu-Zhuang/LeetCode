/*
1486. XOR Operation in an Array
Given an integer n and an integer start.
Define an array nums where nums[i] = start + 2*i (0-indexed) and n == nums.length.
Return the bitwise XOR of all elements of nums.
*/

int xorOperation(int n, int start){
    int ret = start;
    
    for(int i=1;i<n;i++)
        ret = ret ^ (start+i*2);

    return ret;
}


/*
result
Success
Runtime: 0 ms, faster than 100.00% of C online submissions for XOR Operation in an Array.
Memory Usage: 5.5 MB, less than 19.64% of C online submissions for XOR Operation in an Array.
*/