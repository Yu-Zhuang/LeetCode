/*
561. Array Partition I
Given an array of 2n integers, your task is to group these integers into n pairs of integer, say (a1, b1), (a2, b2), ..., (an, bn) which makes sum of min(ai, bi) for all i from 1 to n as large as possible.

Example 1:

Input: [1,4,3,2]

Output: 4
Explanation: n is 2, and the maximum sum of pairs is 4 = min(1, 2) + min(3, 4).
Note:

n is a positive integer, which is in the range of [1, 10000].
All the integers in the array will be in the range of [-10000, 10000].
*/
/**
 * @param {number[]} nums
 * @return {number}
 */

// hash method O(n)
var arrayPairSum = function(nums) {
	let min=0,max=nums[0], len=nums.length, tmp=0, ret=0;
	let list = Array(20001).fill(0);
	// put num into list and find max and min;
	for(let i=0;i<len;i++){ 
		list[(nums[i]+10000)]++; 
		if((nums[i]+10000)>max) max=nums[i]+10000;
		if((nums[i]+10000)<min) min=nums[i]+10000;
	}
	//conpution
	for(let i=max; i>=min; i--){
		if(list[i]){
			if(list[i]==1&&(tmp%2)) { ret+=i-10000; tmp++; } 
			else if(list[i]==2) { ret+=i-10000; tmp+=2; }
			else if(list[i]%2&&list[i]>2) { ret+=(i-10000)*Math.floor((list[i]+(tmp%2))/2); tmp+=list[i]; }
			else if(list[i]%2==0&&list[i]>2){ ret+=(i-10000)*Math.floor(list[i]/2); tmp+=list[i]; }
			else tmp++;
		}
	}
    return ret;
};

// sort method O(nlogn)
var arrayPairSum = function(nums) {
    const len=nums.length;
    let ret=0;
    //sort 
    nums = nums.sort((a,b) => b-a)
    //conpution
    for(let i=0;i<len;i++) if(i%2) ret+=nums[i];
    //output
    return ret;
};

/*
result:
@ hash():
Runtime: 80 ms, faster than 99.03% of JavaScript online submissions for Array Partition I.
Memory Usage: 40.2 MB, less than 11.11% of JavaScript online submissions for Array Partition I.
@ sort(): 
Runtime: 108 ms, faster than 91.55% of JavaScript online submissions for Array Partition I.
Memory Usage: 39.3 MB, less than 11.11% of JavaScript online submissions for Array Partition I.
*/
