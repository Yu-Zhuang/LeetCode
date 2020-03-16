// 1. Two Sum

/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(nums, target) {
    const ret=[];
    const list=[];
    for(var i in nums){
        if(list[nums[i]] != undefined ){
            ret[0] = list[nums[i]];
            ret[1] = i;
        }
        list[target-nums[i]]=i;  
    }
    return ret;
};

/*
Question:
Given an array of integers, return indices of the two numbers such that they add up to a specific target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

Example:

Given nums = [2, 7, 11, 15], target = 9,

Because nums[0] + nums[1] = 2 + 7 = 9,
return [0, 1].
*/
/*
Runtime: 52 ms, faster than 93.64% of JavaScript online submissions for Two Sum.
Memory Usage: 37 MB, less than 8.68% of JavaScript online submissions for Two Sum.
*/