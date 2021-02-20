


int* twoSum(int* numbers, int numbersSize, int target, int* returnSize){
    int i=0,j=numbersSize-1,flag=1;
    int *ret=(int*)malloc(sizeof(int)*2);
    *returnSize=2;
    while(flag){
        if(numbers[i]+numbers[j]>target){
            j--;
        }else if(numbers[i]+numbers[j]<target){
            i++;
        }else if(numbers[i]+numbers[j]==target){
            ret[0]=i+1;
            ret[1]=j+1;
            flag=0;
        }
    }
    return ret;
}

/*
Given an array of integers that is already sorted in ascending order, find two numbers such that they add up to a specific target number.

The function twoSum should return indices of the two numbers such that they add up to the target, where index1 must be less than index2.

Note:

Your returned answers (both index1 and index2) are not zero-based.
You may assume that each input would have exactly one solution and you may not use the same element twice.
Example:

Input: numbers = [2,7,11,15], target = 9
Output: [1,2]
Explanation: The sum of 2 and 7 is 9. Therefore index1 = 1, index2 = 2.
*/
