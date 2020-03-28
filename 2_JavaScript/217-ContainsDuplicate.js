/*
217. Contains Duplicate
Given an array of integers, find if the array contains any duplicates.

Your function should return true if any value appears at least twice in the array, and it should return false if every element is distinct.

Example 1:

Input: [1,2,3,1]
Output: true
Example 2:

Input: [1,2,3,4]
Output: false
Example 3:

Input: [1,1,1,3,3,4,3,2,4,2]
Output: true
*/
/**
 * @param {number[]} nums
 * @return {boolean}
 */
//solution I
var containsDuplicate = function(nums) {
	let list = [], len=nums.length;
    for(let i=0; i<len; i++){
    	if(list[nums[i]]!=undefined) return true;
        list[nums[i]]=1;
    }
    return false;
};
//solution II
var containsDuplicate = function(nums) {
    return new Set(nums).size != nums.length;
};

/*
result:
@ solution I
Runtime: 72 ms, faster than 56.27% of JavaScript online submissions for Contains Duplicate.
Memory Usage: 42.2 MB, less than 29.41% of JavaScript online submissions for Contains Duplicate.

@ solution II
Runtime: 60 ms, faster than 92.33% of JavaScript online submissions for Contains Duplicate.
Memory Usage: 40 MB, less than 88.24% of JavaScript online submissions for Contains Duplicate.
*/
