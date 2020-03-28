// mySqrt
int mySqrt(long int x){
    long int i;
    int ans;
    int m;
    for(i=1;i<=x;i++){
        if(i*i==x){
            ans=i;
            break;
        }
        else if(i*i>x){
            ans=i-1;
            break;
        }
    }
    return ans;
}
// 0 ms
int mySqrt(long int x){
    return sqrt(x);
}

/*
 Implement int sqrt(int x).

 Compute and return the square root of x, where x is guaranteed to be a non-negative integer.

 Since the return type is an integer, the decimal digits are truncated and only the integer part of the result is returned.

 Example 1:

 Input: 4
 Output: 2
 Example 2:

 Input: 8
 Output: 2
 Explanation: The square root of 8 is 2.82842..., and since
              the decimal part is truncated, 2 is returned.
 */
