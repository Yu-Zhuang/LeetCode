

int myAtoi(char * str){
    long long int i=0, ret=0, neg=0, flag=1, list[13]={0}, count=0, ten=1;
    
    while(str[i]&&flag){
        if(str[i]>57) return 0;
        else if(str[i]<48 && str[i]!=45 && str[i]!=43 && str[i]!=32) return 0;
        
        if(str[i]==32) { i++; continue; }
        else{
            if(str[i]==45) { neg=1; i++; }
            else if(str[i]==43) i++;

            if(str[i]>47&&str[i]<58){
                while(str[i]>47&&str[i]<58){
                    if(count==0&&str[i]-48==0) {i++; continue;}
                    list[count]=str[i]-48;
                    i++; count++;
                    if(count>11 && neg==1) return INT_MIN;
                    else if(count>11 && neg==0) return INT_MAX;
                }
                for(int j=count-1;j>=0;j--){
                    ret=ret+ten*list[j];
                    ten*=10;
                    if(ret>INT_MAX) break;
                }
                if(neg) ret*=-1;
                if(ret<INT_MIN) return INT_MIN;
                if(ret>INT_MAX) return INT_MAX;
                else return ret;
            }
            else flag=0;
        }
    }
    return ret;
}

/*
8. String to Integer (atoi)
Implement atoi which converts a string to an integer.

The function first discards as many whitespace characters as necessary until the first non-whitespace character is found. Then, starting from this character, takes an optional initial plus or minus sign followed by as many numerical digits as possible, and interprets them as a numerical value.

The string can contain additional characters after those that form the integral number, which are ignored and have no effect on the behavior of this function.

If the first sequence of non-whitespace characters in str is not a valid integral number, or if no such sequence exists because either str is empty or it contains only whitespace characters, no conversion is performed.

If no valid conversion could be performed, a zero value is returned.

Note:

Only the space character ' ' is considered as whitespace character.
Assume we are dealing with an environment which could only store integers within the 32-bit signed integer range: [−231,  231 − 1]. If the numerical value is out of the range of representable values, INT_MAX (231 − 1) or INT_MIN (−231) is returned.
Example 1:

Input: "42"
Output: 42
Example 2:

Input: "   -42"
Output: -42
Explanation: The first non-whitespace character is '-', which is the minus sign.
             Then take as many numerical digits as possible, which gets 42.
Example 3:

Input: "4193 with words"
Output: 4193
Explanation: Conversion stops at digit '3' as the next character is not a numerical digit.
Example 4:

Input: "words and 987"
Output: 0
Explanation: The first non-whitespace character is 'w', which is not a numerical 
             digit or a +/- sign. Therefore no valid conversion could be performed.
Example 5:

Input: "-91283472332"
Output: -2147483648
Explanation: The number "-91283472332" is out of the range of a 32-bit signed integer.
             Thefore INT_MIN (−231) is returned.
*/
