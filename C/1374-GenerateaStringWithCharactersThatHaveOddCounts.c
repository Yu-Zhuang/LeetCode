/* Q:
Given an integer n, return a string with n characters such that each character in such string occurs an odd number of times.
The returned string must contain only lowercase English letters. If there are multiples valid strings, return any of them.  
*/
char * generateTheString(int n){
    if(n>0){
        char *str = (char*)malloc(sizeof(char)*(n+1));
        memset(str,'a',n-1);
        str[n-1] = (n%2) ? 'a' : 'b';
        str[n] = '\0';
        return str;        
    }
    return NULL;
}
/* Result:
Success
Runtime: 0 ms, faster than 100.00% of C online submissions for Generate a String With Characters That Have Odd Counts.
Memory Usage: 5.5 MB, less than 89.74% of C online submissions for Generate a String With Characters That Have Odd Counts.
*/