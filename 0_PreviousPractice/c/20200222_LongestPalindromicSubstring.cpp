char * longestPalindrome(char * s){
	int left=0, right=0, i=0, j=0;
	int tmp=0, max=1;
	char *str;
	while(s[right]) right++;
	right-=1;
    int flag=0;
	while(s[i]){
		j=right;
		if(j-i+1 <= max) break;

			while(j>i){
				if(j-i+1 <= max) break;
					if(s[i] == s[j]){
						tmp=whetherPLD(s,i,j);
						if(tmp > max){
							char *newtmp=(char*)malloc(sizeof(char)*(tmp+1));
							max=tmp;
							newtmp[tmp]='\0';
							int m=0;
							for(int k=i;k<=j;k++) {newtmp[m]=s[k]; m++;}
							str=newtmp;
							flag=1;
						}
					}
	
				j--;
			}

		i++;
	}
    char *ret=(char*)malloc(sizeof(char)*2);
    ret[0]=s[0]; ret[1]='\0';
    
	if(flag) return str;
    return ret;
}

int whetherPLD(char *s, int start, int end){
	int count=0;
	while(start < end){
		if(s[start] == s[end]){
			count++;
			start++; end--;  
		}
		else return 0;
	}
	if(start == end) return count*2+1; 
    return count*2;
}