//
int singleNumber(int* nums, int numsSize){
    int i,j;
    int temp=0;
    int con;
    
    for(i=0;i<numsSize;i++){
        temp=0;
        for(j=0;j<numsSize;j++){
            con=nums[i];
            if(nums[i]==nums[j]){
                temp+=1;
            }
        }
        if (temp<2)
            break;
    }
    return con;
}
/*
 Given a non-empty array of integers, every element appears twice except for one. Find that single one.

 Note:

 Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory?

 Example 1:

 Input: [2,2,1]
 Output: 1
 
 Example 2:

 Input: [4,1,2,1,2]
 Output: 4

 */
