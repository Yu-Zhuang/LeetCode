// 1. Two Sum
/*
Question:
Given an array of integers, return indices of the two numbers such that they add up to a specific target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

Example:

Given nums = [2, 7, 11, 15], target = 9,

Because nums[0] + nums[1] = 2 + 7 = 9,
return [0, 1].
*/
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
	*returnSize=2;
	int *ret=(int*)malloc(sizeof(int)*2);
	int list[10000]={0}, flag=1;

	for(int i=0;i<numsSize&&flag;i++){
		for(int j=0;j<i;j++) if(list[j] == nums[i]) { ret[0]=j; ret[1]=i; flag=0; break; }
		list[i]=target-nums[i];
	}
	return ret;
}
/*
result:
Runtime: 68 ms, faster than 80.59% of C online submissions for Two Sum.

Memory Usage: 6 MB, less than 100.00% of C online submissions for Two Sum.

*/
