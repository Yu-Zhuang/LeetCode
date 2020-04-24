/*
20. Valid Parentheses
Given a string containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Note that an empty string is also considered valid.
*/

typedef struct q{
    char val;
    struct q *next;
}S;
void push(S *s, char c){
    S *newnode=(S*)malloc(sizeof(S));
    newnode->val=c;
    newnode->next=s->next;
    s->next=newnode;
}
int pop(S *s, char c){
    if(s->next){
        if(s->next->val == c){
            S *ptr=s->next;
            s->next=s->next->next;
            free(ptr);
            return 1;
        }        
    }
    return 0;
}

bool isValid(char * s){
    S *head=(S*)malloc(sizeof(S));
    head->next=NULL;
    int i=0;
    while(s[i]){
        if(s[i]=='('||s[i]=='['||s[i]=='{'){
            push(head,s[i]);
        }
        else if(s[i]==')'||s[i]==']'||s[i]=='}'){
            char tmp;
            switch(s[i]){
                case ')': tmp='('; break;
                case ']': tmp='['; break;
                case '}': tmp='{'; break;
                default: break;
            }
           if( pop(head,tmp)==0) return false;
        } 
        i++;
    }
    if(head->next==NULL) return true;   
    else return false;
}
/*
Runtime: 0 ms, faster than 100.00% of C online submissions for Valid Parentheses.
Memory Usage: 5.3 MB, less than 100.00% of C online submissions for Valid Parentheses.
*/
