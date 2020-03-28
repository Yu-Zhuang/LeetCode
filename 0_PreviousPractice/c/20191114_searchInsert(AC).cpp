//
int searchInsert(int* nums, int numsSize, int target){
    int i,j;
    int temp=0;
    int ans;
    for(i=0;i<numsSize;i++){
        if(nums[i]==target){
            temp+=1;
            break;
        }
    }
    if(temp==1)
        ans=i;
    else{
        for(i=0;i<numsSize;i++){
            if(i+1==numsSize&&nums[i]!=target){
                if(nums[i]<target){
                    ans=i+1;
                    break;
                }
                else if(nums[i]>target){
                    ans=0;
                    break;
                }
            }
            else if((nums[i]<target&&nums[i+1]>target)||\
               (nums[i]>target&&nums[i+1]<target)){
                ans=i+1;
                break;
            }
        }
    }
    
    return ans;
}
