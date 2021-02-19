/*
    14. Longest Common Prefix
Write a function to find the longest common prefix string amongst an array of strings.
If there is no common prefix, return an empty string "".

Example 1:
Input: ["flower","flow","flight"]
Output: "fl"

Example 2:
Input: ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.

Note:
All given inputs are in lowercase letters a-z.
*/

char * longestCommonPrefix(char ** strs, int strsSize){
    if(!strsSize) return "";
    if(strsSize == 1) return strs[0];
    //get "templet" from "first string"
    char *templet = strs[0];
    int min_num = strlen(templet), j=0;
    //go through all string
    for(int i=1;i<strsSize;i++){
        //find num of prefix in the string ( O(n*m) )
        for(j=0;j<min_num;j++)
            if(templet[j] != strs[i][j])
                break;
        //record the min_num of prefix   
        min_num = j;     
    }
    //return the min_num of templet
    templet[j] = '\0';
    return templet;
}
/*
Result:Success
Runtime: 0 ms, faster than 100.00% of C online submissions for Longest Common Prefix.
Memory Usage: 5.6 MB, less than 100.00% of C online submissions for Longest Common Prefix.
*/