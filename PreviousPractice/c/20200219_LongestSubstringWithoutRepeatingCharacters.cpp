

int lengthOfLongestSubstring(char * s){
    if(!s[0]) return 0;
	int i, j=0, count=0, max=1, list[200]={0};

	while(s[j]){
		i=j;
		while(s[i]!='\0'){
			list[s[i]]++;
			if(list[s[i]]>1){
				Zero(list,200);
				count=0;
				break;
			}
			count++;
			if(count>max) max=count;
			i++;
		}
		if(!s[i]) break;
		j++;
	}
    
	return max;
}

void Zero(int *nums, int numsSize){
	for(int i=0;i<numsSize;i++) nums[i]=0;
}

/*
3. Longest Substring Without Repeating Characters
Medium

7766

457

Add to List

Share
Given a string, find the length of the longest substring without repeating characters.

Example 1:

Input: "abcabcbb"
Output: 3 
Explanation: The answer is "abc", with the length of 3. 
Example 2:

Input: "bbbbb"
Output: 1
Explanation: The answer is "b", with the length of 1.
Example 3:

Input: "pwwkew"
Output: 3
Explanation: The answer is "wke", with the length of 3. 
             Note that the answer must be a substring, "pwke" is a subsequence and not a substring
*/