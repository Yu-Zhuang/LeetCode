


int* sortedSquares(int* A, int ASize, int* returnSize){
    int i;
    int temp;
    int flag=1;
    *returnSize=ASize;
    
    for(i=0;i<ASize;i++){ //square
        temp=A[i];
        A[i]=temp*temp;
    }
    
    while(flag){ //sorted
        flag=0;
        for(i=0;i<ASize-1;i++){
            if(A[i]>A[i+1]){
                flag=1;
                temp=A[i];
                A[i]=A[i+1];
                A[i+1]=temp;
            }
        }
    }

    return A;
}

/*
Given an array of integers A sorted in non-decreasing order, return an array of the squares of each number, also in sorted non-decreasing order.

 

Example 1:

Input: [-4,-1,0,3,10]
Output: [0,1,9,16,100]
Example 2:

Input: [-7,-3,2,3,11]
Output: [4,9,9,49,121]
 

Note:

1 <= A.length <= 10000
-10000 <= A[i] <= 10000
A is sorted in non-decreasing order.
*/

