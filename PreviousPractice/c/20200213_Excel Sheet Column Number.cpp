int titleToNumber(char * s){
    int ret=0,*list=(int*)malloc(0),count=0,bit=1, letter=96;
    if(s[0]<65||s[0]>122) return 0;
    
    while(s[count]!='\0'){
        if(s[count]<97) letter=64;
        else letter=96;
        list=(int*)realloc(list,sizeof(int)*(count+1));
        list[count]=s[count]-letter;
        count++;
    }

    for(int i=count-1;i>=0;i--){
        ret+=list[i]*bit;
        if(i==0) break;
        bit*=26;
    }
    return ret;
}
/*
171. Excel Sheet Column Number
Easy

764

133

Add to List

Share
Given a column title as appear in an Excel sheet, return its corresponding column number.

For example:

    A -> 1
    B -> 2
    C -> 3
    ...
    Z -> 26
    AA -> 27
    AB -> 28 
    ...
Example 1:

Input: "A"
Output: 1
Example 2:

Input: "AB"
Output: 28
Example 3:

Input: "ZY"
Output: 701
*/