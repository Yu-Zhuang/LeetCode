


bool judgeSquareSum(int c){
    long int i=0,j=0;
    
    do j++; while(j*j<c);
    
    while(i<=j){
        if(i*i+j*j==c) return true;
        if(i*i+j*j<c) i++;
        else if(i*i+j*j>c) j--;
    }
    return false;
}



/*
Given a non-negative integer c, your task is to decide whether there're two integers a and b such that a2 + b2 = c.

Example 1:

Input: 5
Output: True
Explanation: 1 * 1 + 2 * 2 = 5
 

Example 2:

Input: 3
Output: False
*/

