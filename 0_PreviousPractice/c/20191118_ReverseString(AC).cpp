


void reverseString(char* s, int sSize){
    int i;
    char *ret;
    int temp=0;
    ret=(char*)malloc(sizeof(char)*sSize);
    for(i=sSize-1;i>=0;i--){
        *(ret+temp)=s[i];
        temp+=1;
    }
    for(i=0;i<sSize;i++){
        s[i]=ret[i];
    }
    return;
}
//解法二
void reverseString(char* s, int sSize){
    int i,j;
    char ret;

    for(i=sSize-1,j=0;j<i;i--,j++){
        ret=s[i];
        s[i]=s[j];
        s[j]=ret;
    }

    return;
}

/*
 Write a function that reverses a string. The input string is given as an array of characters char[].

 Do not allocate extra space for another array, you must do this by modifying the input array in-place with O(1) extra memory.

 You may assume all the characters consist of printable ascii characters.

  

 Example 1:

 Input: ["h","e","l","l","o"]
 Output: ["o","l","l","e","h"]
 Example 2:

 Input: ["H","a","n","n","a","h"]
 Output: ["h","a","n","n","a","H"]
 */

