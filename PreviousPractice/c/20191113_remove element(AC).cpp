// remove number
int removeElement(int* nums, int numsSize, int val){
    int i;
    int temp=0;
    
    for(i=0;i<numsSize;i++){
        if(nums[i]!=val){
            nums[temp]=nums[i];
            temp+=1;
        }
    }
    return temp;
}
