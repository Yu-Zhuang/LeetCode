

int* searchRange(int* nums, int numsSize, int target, int* returnSize){
    int *back=(int*)malloc(sizeof(int)*2); //variable
    *returnSize=2; back[0]=-1; back[1]=-1; //initialization
    
    for(int i=0;i<numsSize;i++){ //compution
        if(nums[i]==target){
            if(back[0]==-1) back[0]=i;
            back[1]=i;
        }
    }

    return back; //output
}



/*
Given an array of integers nums sorted in ascending order, find the starting and ending position of a given target value.

Your algorithm's runtime complexity must be in the order of O(log n).

If the target is not found in the array, return [-1, -1].

Example 1:

Input: nums = [5,7,7,8,8,10], target = 8
Output: [3,4]
Example 2:

Input: nums = [5,7,7,8,8,10], target = 6
Output: [-1,-1]
*/

