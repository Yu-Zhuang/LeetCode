//
int removeDuplicates(int* nums, int numsSize){
    int i=0;
    int temp=0;
    int x=1;
    int *us;
    
    if(numsSize>0)
        x=numsSize;
    int tnums[x];
    if(numsSize==1){
        for(i=0;i<numsSize-1;i++){
        if(nums[i]!=nums[i+1]){
            tnums[temp]=nums[i];
            tnums[temp+1]=nums[i+1];
            temp+=1;
            }
        }
        for(i=0;i<temp;i++){
            nums[i]=tnums[i];
        }
        return 1;
    }
    else if(numsSize==0)
        return 0;
    
    for(i=0;i<numsSize-1;i++){
        if(nums[i]!=nums[i+1]){
            tnums[temp]=nums[i];
            tnums[temp+1]=nums[i+1];
            temp+=1;
        }
        else{
            tnums[temp]=nums[i];
        }
    }
    for(i=0;i<=temp;i++){
        nums[i]=tnums[i];
    }
    return temp+1;
}
