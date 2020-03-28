


int lengthOfLastWord(char * s){
    int ret=0;
    while(*s!='\0'){
        while(*s=='\ ') ++s;
        if(*s!='\0'){
            ret=0;
            while(*s!='\0'&&*s!='\ ') (++ret,++s);
        }
    }
    return ret;
} 

/*
Given a string s consists of upper/lower-case alphabets and empty space characters ' ', return the length of last word in the string.

If the last word does not exist, return 0.

Note: A word is defined as a character sequence consists of non-space characters only.

Example:

Input: "Hello World"
Output: 5
*/

