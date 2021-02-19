


int findKthLargest(int* nums, int numsSize, int k){
    int i,j,ret;
    
    for(i=0;i<numsSize-1;i++){
        ret=nums[i];
        for(j=i+1;j<numsSize;j++){
            if(ret<nums[j]){
                ret^=nums[j];
                nums[j]^=ret;
                ret^=nums[j];
            }
        }
        if(i+1==k) break;
    }
    
    if(k==numsSize) ret=nums[i];
    
   return ret;
    
}

/*
Find the kth largest element in an unsorted array. Note that it is the kth largest element in the sorted order, not the kth distinct element.

Example 1:

Input: [3,2,1,5,6,4] and k = 2
Output: 5
Example 2:

Input: [3,2,3,1,2,4,5,5,6] and k = 4
Output: 4
Note:
You may assume k is always valid, 1 ≤ k ≤ array's length.
*/

