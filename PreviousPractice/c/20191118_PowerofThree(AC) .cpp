


bool isPowerOfThree(int n){
    int i;
    int output=0;
    
    if(n==1)
        return 1;
    
    if(n%2==0||n%5==0||n%7==0||n%11==0)
        return 0;
    while(n!=0){
        if(n%3==0&&n/3==1){
            output=1;
            break;
        }
        else if(n%3!=0){
            output=0;
            break;
        }
        n=n/3;
    }

    return output;
}

/*
 Given an integer, write a function to determine if it is a power of three.

 Example 1:

 Input: 27
 Output: true
 Example 2:

 Input: 0
 Output: false
 Example 3:

 Input: 9
 Output: true
 Example 4:

 Input: 45
 Output: false
 Follow up:
 Could you do it without using any loop / recursion?
 */

