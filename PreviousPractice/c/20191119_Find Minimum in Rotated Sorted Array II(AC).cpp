


int findMin(int* nums, int numsSize){
    int i;
    int temp=nums[0];
    for(i=1;i<numsSize;i++){
        if(nums[i]<temp)
            temp=nums[i];
    }
    return temp;
}

/*
Suppose an array sorted in ascending order is rotated at some pivot unknown to you beforehand.

(i.e.,  [0,1,2,4,5,6,7] might become  [4,5,6,7,0,1,2]).

Find the minimum element.

The array may contain duplicates.

Example 1:

Input: [1,3,5]
Output: 1
Example 2:

Input: [2,2,2,0,1]
Output: 0
*/

