/*
Daily Temperatures
Given a list of daily temperatures T, return a list such that, for each day in the input, tells you how many days you would have to wait until a warmer temperature. If there is no future day for which this is possible, put 0 instead.

For example, given the list of temperatures T = [73, 74, 75, 71, 69, 72, 76, 73], your output should be [1, 1, 4, 2, 1, 1, 0, 0].

Note: The length of temperatures will be in the range [1, 30000]. Each temperature will be an integer in the range [30, 100].
*/
typedef struct q{
    int val;
    struct q *next;
}S;

int* dailyTemperatures(int* T, int TSize, int* returnSize){   
	S *s=(S*)malloc(sizeof(S));
	s->next=NULL;	
	int *ret= (int*)malloc(sizeof(int)*TSize);
    for(int i=0;i<TSize;i++) ret[i]=0;
    
	for(int i=0;i<TSize;i++){
		while( s->next && T[i]>T[s->next->val]){
			int idx = pop(s);
			ret[idx] = i - idx;
		}
		push(s,i);
	}

	returnSize[0]=TSize;
	return ret;
}

void push(S *s, int n){
    S *newnode=(S*)malloc(sizeof(S));
    newnode->val = n;
    newnode->next = s->next;
    s->next = newnode;
}
int pop(S *s){ 
    if(s->next){
    	int ret=0;
    	ret = s->next->val;
        S *ptr = s->next;
        s->next = s->next->next;
        free(ptr);
        return ret;   
    }
    return -1;
}
 // version I
int* dailyTemperatures(int* T, int TSize, int* returnSize){
	int flag = checkArray(T, TSize);
	int *ret=(int*)malloc(sizeof(int)*TSize);
	
	if(flag)
		for(int i=0;i<TSize;i++)
			ret[i] = find_high(&T[i], TSize-i);
	else
		for(int i=0;i<TSize;i++)
			ret[i]=0;
		
	returnSize[0]=TSize;
	return ret;
}
int find_high(int *T, int TSize){
	int origin=T[0];
	for(int i=0;i<TSize;i++)
		if(T[i]>origin) return i;
	return 0;
}
int checkArray(int *T, int TSize){
	int origin=T[0];
	for(int i=0;i<TSize;i++){
        if(T[i]<origin) origin=T[i];
        else if(T[i]>origin) return 1;
    }		
	return 0;
}
/*
result (version II):
Runtime: 188 ms, faster than 20.73% of C online submissions for Daily Temperatures.
Memory Usage: 32.7 MB, less than 50.00% of C online submissions for Daily Temperatures.
*/


