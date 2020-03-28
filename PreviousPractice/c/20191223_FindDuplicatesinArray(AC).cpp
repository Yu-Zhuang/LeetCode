


int* findDuplicates(int* nums, int numsSize, int* returnSize){
    int i=0,count=0;
    int *ret,tmp[100000]={0};
    ret=(int*)malloc(sizeof(int)*numsSize);
    
    if(numsSize<2){ //FPD
        *returnSize=NULL;
        return NULL;
    }
    
    do{ //conpution
        tmp[nums[i]]+=1;
        if(tmp[nums[i]]>1){
            ret[count]=nums[i];
            count+=1;
        }
        i+=1;
    }while(i!=numsSize);
    
    *returnSize=count;
   return ret;
}

/*
Given an array of integers, 1 ≤ a[i] ≤ n (n = size of array), some elements appear twice and others appear once.

Find all the elements that appear twice in this array.

Could you do it without extra space and in O(n) runtime?

Example:

Input:
[4,3,2,7,8,2,3,1]

Output:
[2,3]
*/

