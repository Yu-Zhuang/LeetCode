/*
27. Remove Element
Given an array nums and a value val, remove all instances of that value in-place and return the new length.

Do not allocate extra space for another array, you must do this by modifying the input array in-place with O(1) extra memory.

The order of elements can be changed. It doesn't matter what you leave beyond the new length.

Example 1:

Given nums = [3,2,2,3], val = 3,

Your function should return length = 2, with the first two elements of nums being 2.

It doesn't matter what you leave beyond the returned length.

// nums is passed in by reference. (i.e., without making a copy)
int len = removeElement(nums, val);

// any modification to nums in your function would be known by the caller.
// using the length returned by your function, it prints the first len elements.
for (int i = 0; i < len; i++) {
    print(nums[i]);
}
*/
/**
 * @param {number[]} nums
 * @param {number} val
 * @return {number}
 */
var removeElement = function(nums, val) {
    var sum=0;
    for(let i in nums) 
        if(val!=nums[i]){
            nums[sum]=nums[i];
            sum++;   
        }
    return sum;
};
/*
result:
Runtime: 44 ms, faster than 99.30% of JavaScript online submissions for Remove Element.
Memory Usage: 33.9 MB, less than 27.78% of JavaScript online submissions for Remove Element.
Next challenges:
*/
