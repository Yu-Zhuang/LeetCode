/*
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int *ret;
    int i,j,temp=0;
    *returnSize=2;
    ret=(int*)malloc(*(returnSize)*sizeof(int));
    
    for(i=0;i<numsSize-1;i++){
        for(j=i+1;j<numsSize;j++){
            if(nums[i]+nums[j]==target){
                *ret=i;
                *(ret+1)=j;
                temp=1;
                break;
            }
        }
        if(temp==1)
            break;
    }
 
    return ret;
}
/*Given an array of integers, return indices of the two numbers such that they add up to a specific target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

Example:

Given nums = [2, 7, 11, 15], target = 9,

Because nums[0] + nums[1] = 2 + 7 = 9,
return [0, 1].
 */
