
//leetcode
char * reverseVowels(char * s){
    int nums[10]={65,69,73,79,85,97,101,105,111,117};
    int i=0, j=0, flag_1=0, flag_2=0, tmp=0;

    if(!s[0]) return s;

    while(s[j]) j++; j-=1;

    while(i<j){

    	for(int k=0;k<10;k++){
    		if(nums[k] == s[i]) flag_1=1;
    		if(nums[k] == s[j]) flag_2=1;
    		if(flag_1 && flag_2) break;
    	}

    	if(flag_1 && flag_2){
    		tmp=s[i]; s[i]=s[j]; s[j]=tmp;
    		flag_1=0; flag_2=0;
    		i++; j--;
    	}
    	else if(flag_1 && !flag_2) j--;
    	else if(!flag_1 && flag_2) i++;
    	else {i++; j--;}
    }

    return s;
}


/*
Share
Write a function that takes a string as input and reverse only the vowels of a string.

Example 1:

Input: "hello"
Output: "holle"
Example 2:

Input: "leetcode"
Output: "leotcede"
Note:
The vowels does not include the letter "y".
*/