


double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size){
    int* ret;
    ret=(int*)malloc(sizeof(int)*(nums1Size+nums2Size));
    int i;
    double output;
    int temp=1;
    int change;
    
    for(i=0;i<nums1Size+nums2Size;i++){
        if(i<nums1Size)
            ret[i]=nums1[i];
        else
            ret[i]=nums2[i-nums1Size];
    }
    
    while(temp){
        temp=0;
        for(i=0;i<nums1Size+nums2Size-1;i++){
            if(ret[i]>ret[i+1]){
                change=ret[i+1];
                ret[i+1]=ret[i];
                ret[i]=change;
                temp+=1;
            }
        }
    }
    
    if((nums1Size+nums2Size)%2==0){
        output=(double)     (ret[(nums1Size+nums2Size)/2-1]+ret[(nums1Size+nums2Size)/2])/2;
    }
    else{
        output=(double)ret[(nums1Size+nums2Size+1)/2-1];
    }
    
    return output;
}

/*
Example 1:

nums1 = [1, 3]
nums2 = [2]

The median is 2.0
Example 2:

nums1 = [1, 2]
nums2 = [3, 4]

The median is (2 + 3)/2 = 2.5
*/

