'''
Question:
	1. Two Sum
	Given an array of integers, return indices of the two numbers such that they add up to a specific target.

	You may assume that each input would have exactly one solution, and you may not use the same element twice.

	Example:

	Given nums = [2, 7, 11, 15], target = 9,

	Because nums[0] + nums[1] = 2 + 7 = 9,
	return [0, 1].
'''

class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
    	table = {}
    	for i in range(len(nums)):
    		if nums[i] in table:
    			ret = [table[nums[i]], i]
    			del table
    			return ret
    		table[target - nums[i]] = i

'''
Result:
	Runtime: 44 ms, faster than 91.82% of Python3 online submissions for Two Sum.
	Memory Usage: 15.3 MB, less than 5.11% of Python3 online submissions for Two Sum.
'''



