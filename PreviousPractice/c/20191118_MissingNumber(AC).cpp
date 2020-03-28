


int missingNumber(int* nums, int numsSize){
    int i,j;
    int temp=0;
    int output;
    for(i=0;i<=numsSize;i++){
        temp=0;
        for(j=0;j<numsSize;j++){
           if(i==nums[j]){
               temp=1;
               break;
           }
        }
        if(temp==0){
            output=i;
            break;
        }
    }
    return output;
}

/*
 Given an array containing n distinct numbers taken from 0, 1, 2, ..., n, find the one that is missing from the array.

 Example 1:

 Input: [3,0,1]
 Output: 2
 Example 2:

 Input: [9,6,4,2,3,5,7,0,1]
 Output: 8
 */

