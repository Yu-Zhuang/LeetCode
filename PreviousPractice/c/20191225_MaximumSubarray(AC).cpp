


int maxSubArray(int* nums, int numsSize){
    int max=nums[0],sum=0,i;
    
    for(i=0;i<numsSize;i++){
        if(sum>=0) sum+=nums[i];
        else sum=nums[i];
        if(sum > max) max=sum;
    }
   
    return max;
}

/*
Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.

Example:

Input: [-2,1,-3,4,-1,2,1,-5,4],
Output: 6
Explanation: [4,-1,2,1] has the largest sum = 6.
Follow up:

If you have figured out the O(n) solution, try coding another solution using the divide and conquer approach, which is more subtle.
*/

