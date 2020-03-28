


int* twoSum(int* nums, int numsSize, int target, int* returnSize){
	*returnSize=2;
	int *ret=(int*)malloc(sizeof(int)*2);
	int list[10000]={0}, flag=1;

	for(int i=0;i<numsSize&&flag;i++){
		for(int j=0;j<i;j++) if(list[j] == nums[i]) { ret[0]=j; ret[1]=i; flag=0; break; }
		list[i]=target-nums[i];
	}
	return ret;
}