


void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n){
    int *ret;
    int i=0,j;
    int temp=0;
    int flag=1;
    ret=(int*)malloc(sizeof(int)*(m+n));
    
    for(i=0;i<m;i++){ //將array1需要的部分指派給指摽變數ret
        *(ret+i)=nums1[i];
    }
    for(i=m;i<m+n;i++){//將array2需要的部分指派給指摽變數ret
        *(ret+i)=nums2[i-m];
    }
    
    while(flag){ //將 ret 進行 氣泡排序法
        flag=0;
        for(i=0;i<m+n-1;i++){
            if(*(ret+i)>*(ret+i+1)){
                temp=*(ret+i+1);
                *(ret+i+1)=*(ret+i);
                *(ret+i)=temp;
                flag=1;
            }
        }
    }
    
    for(i=0;i<m+n;i++){ //將ret的一維陣列值儲存至array1
        nums1[i]=*(ret+i);
    }
    return;
}

/*
 Given two sorted integer arrays nums1 and nums2, merge nums2 into nums1 as one sorted array.

 Note:

 The number of elements initialized in nums1 and nums2 are m and n respectively.
 You may assume that nums1 has enough space (size that is greater or equal to m + n) to hold additional elements from nums2.
 Example:

 Input:
 nums1 = [1,2,3,0,0,0], m = 3
 nums2 = [2,5,6],       n = 3

 Output: [1,2,2,3,5,6]
 */

