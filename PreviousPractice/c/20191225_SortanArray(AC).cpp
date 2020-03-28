


int* sortArray(int* nums, int numsSize, int* returnSize){
    quickSort(nums, 0, numsSize - 1);
    *returnSize = numsSize;
    return nums;
}

void quickSort(int * num, int start, int end){
    if (start >= end)
        return;
    int temp = num[start];
    int i = start, k = end;
    while (i < k){
        for (k; num[k] >= temp && k > i; k--);
        num[i] = num[k];
        num[k] = temp;
        for (i; num[i] <= temp && i < k; i++);
        num[k] = num[i];
        num[i] = temp;
    }
    quickSort(num, start, i-1);
    quickSort(num, k+1, end);
}



/*
Given an array of integers nums, sort the array in ascending order.

 

Example 1:

Input: nums = [5,2,3,1]
Output: [1,2,3,5]
Example 2:

Input: nums = [5,1,1,2,0,0]
Output: [0,0,1,1,2,5]
 

Constraints:

1 <= nums.length <= 50000
-50000 <= nums[i] <= 50000
*/

