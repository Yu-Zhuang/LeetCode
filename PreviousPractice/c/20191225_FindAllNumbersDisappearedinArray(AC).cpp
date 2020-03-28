


int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize){
    int i,j,*ret,tmp[numsSize+1];
    ret=(int*)malloc(0);
    *returnSize=0;
    
    for(i=0;i<numsSize+1;i++) tmp[i]=0;
    for(i=0;i<numsSize;i++) tmp[nums[i]]++;
    
    for(i=1;i<=numsSize;i++){
        if(tmp[i]==0){
            ret=(int*)realloc(ret,sizeof(int)*(*returnSize+1));
            ret[*returnSize]=i;
            *returnSize+=1;
        }
    }
    return ret;
}

/*
Given an array of integers where 1 ≤ a[i] ≤ n (n = size of array), some elements appear twice and others appear once.

Find all the elements of [1, n] inclusive that do not appear in this array.

Could you do it without extra space and in O(n) runtime? You may assume the returned list does not count as extra space.

Example:

Input:
[4,3,2,7,8,2,3,1]

Output:
[5,6]
*/

