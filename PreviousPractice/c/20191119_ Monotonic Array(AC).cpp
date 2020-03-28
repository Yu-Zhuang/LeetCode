


bool isMonotonic(int* A, int ASize){
    int i=0;
    int output=1;
    int temp=0;
    int tmp;
    
    if(ASize==1)
        return true;
    
    while(i+1!=ASize-1){
        if(A[i]!=A[i+1]){
            temp+=1;
            break;
        }
        i+=1;
    }
    
    tmp=i;
    
    if(temp==0)
        return true;
    
    else if(A[i]>A[i+1]){
        for(i=tmp;i<ASize-1;i++){
            if(A[i]<A[i+1]){
                output=0;
                break;
            }
        }
    }
   else if(A[i]<A[i+1]){
        for(i=tmp;i<ASize-1;i++){
            if(A[i]>A[i+1]){
                output=0;
                break;
            }
        }
    }
    return output;
}

/*
An array is monotonic if it is either monotone increasing or monotone decreasing.

An array A is monotone increasing if for all i <= j, A[i] <= A[j].  An array A is monotone decreasing if for all i <= j, A[i] >= A[j].

Return true if and only if the given array A is monotonic.

 

Example 1:

Input: [1,2,2,3]
Output: true
Example 2:

Input: [6,5,4,4]
Output: true
Example 3:

Input: [1,3,2]
Output: false
Example 4:

Input: [1,2,4,5]
Output: true
Example 5:

Input: [1,1,1]
Output: true
*/

