


char * toLowerCase(char * str){
    int i=0;
    while(str[i]!='\0'){
        if (str[i]>=65&&str[i]<=90)
            str[i]=str[i]+32;
        i++;
    }
    return str;
}

/*
 Implement function ToLowerCase() that has a string parameter str, and returns the same string in lowercase.

  

 Example 1:

 Input: "Hello"
 Output: "hello"
 Example 2:

 Input: "here"
 Output: "here"
 Example 3:

 Input: "LOVELY"
 Output: "lovely"
 */

