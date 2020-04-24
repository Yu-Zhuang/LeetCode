/*
80. Remove Duplicates from Sorted Array II
Given a sorted array nums, remove the duplicates in-place such that duplicates appeared at most twice and return the new length.

Do not allocate extra space for another array, you must do this by modifying the input array in-place with O(1) extra memory.

Example 1:

Given nums = [1,1,1,2,2,3],

Your function should return length = 5, with the first five elements of nums being 1, 1, 2, 2 and 3 respectively.

It doesn't matter what you leave beyond the returned length.
Example 2:

Given nums = [0,0,1,1,1,1,2,3,3],

Your function should return length = 7, with the first seven elements of nums being modified to 0, 0, 1, 1, 2, 3 and 3 respectively.

It doesn't matter what values are set beyond the returned length.
Clarification:

Confused why the returned value is an integer but your answer is an array?

Note that the input array is passed in by reference, which means modification to the input array will be known to the caller as well.

Internally you can think of this:

// nums is passed in by reference. (i.e., without making a copy)
int len = removeDuplicates(nums);

// any modification to nums in your function would be known by the caller.
// using the length returned by your function, it prints the first len elements.
for (int i = 0; i < len; i++) {
    print(nums[i]);
}
*/

int removeDuplicates(int* nums, int numsSize){
    if(!numsSize) return NULL;
// variable annoucement
    int ret=0, nSize=numsSize;
    int pre = (nums[0]<0) ? pre+1 : pre-1 ; // pre can't equal to nums[0];
// conpution
    for(int i=0 ; i<nSize ; i++){
        if(pre==nums[i] && i+1<nSize && nums[i+1]==pre){
            nSize -= MOVE_ARRAY( &nums[i+1], numsSize-i-1 );
            ret++;
        }
        else{ pre=nums[i]; ret++; }
    }
// end  
    return ret;
}

// move_array_function
int  MOVE_ARRAY(int *nums, int numsSize){
    int target=nums[0], i=0;
    while(i<numsSize&&nums[i]==target) i++;
    for(int j=0;j<numsSize-i;j++) nums[j]=nums[j+i];
    return i;
}

/************************************************************************************/
/************************************************************************************/
// SOLUTION II
int removeDuplicates(int* nums, int numsSize){
    int i=0;
    
    for(int n=0;n<numsSize;n++){
        if(i<2 || nums[n]>nums[i-2]){
            nums[i]= nums[n];
            i++;
        }
    }
    
    return i;
}
/*
Result:
Runtime: 8 ms, faster than 91.22% of C online submissions for Remove Duplicates from Sorted Array II.
Memory Usage: 6.4 MB, less than 100.00% of C online submissions for Remove Duplicates from Sorted Array II.
*/