


int* plusOne(int* digits, int digitsSize, int* returnSize){
    int i=digitsSize-1,flag=0,tmp=0;
    int* ret;
    *returnSize=digitsSize;
    //digitsSize==1;
    if(digitsSize==1){
        digits[0]+=1;
        if(digits[0]<10)
            return digits;
        else{
            *returnSize=digitsSize+1;
            ret=(int*)malloc(sizeof(int)*returnSize[0]);
            ret[0]=1;
            ret[1]=0;
            return ret;
        }
    }
    //digitsSize>1;
    if(digits[i]+1<10)
        flag=1;
    for(i=digitsSize-1;i>=1;i--){
        tmp=0;
        if(digits[i]+1<10){
            tmp=1;
            digits[i]+=1;
            break;
        }
        digits[i]+=1;
        digits[i]-=10;
    }
    //不用進位
    if(flag)
        return digits;
    //=========需要進位=============
    if(digits[0]+1>=10&&tmp==0){
        ret=(int*)malloc(sizeof(int)*(digitsSize+1));
        *returnSize=digitsSize+1;
        digits[0]-=9;
        for(i=1;i<=digitsSize;i++){
            ret[i]=digits[i-1];
        }
        ret[0]=1;
    }else if(tmp==0&&digits[0]+1<10){
        ret=(int*)malloc(sizeof(int)*(digitsSize));
        for(i=0;i<digitsSize;i++){
            ret[i]=digits[i];
        }
        ret[0]+=1;
    }else if(tmp==1){
        ret=(int*)malloc(sizeof(int)*(digitsSize));
        for(i=0;i<digitsSize;i++){
            ret[i]=digits[i];
        }
    }

    return ret;
}

/*
Given a non-empty array of digits representing a non-negative integer, plus one to the integer.

The digits are stored such that the most significant digit is at the head of the list, and each element in the array contain a single digit.

You may assume the integer does not contain any leading zero, except the number 0 itself.

Example 1:

Input: [1,2,3]
Output: [1,2,4]
Explanation: The array represents the integer 123.
Example 2:

Input: [4,3,2,1]
Output: [4,3,2,2]
Explanation: The array represents the integer 4321.
*/

