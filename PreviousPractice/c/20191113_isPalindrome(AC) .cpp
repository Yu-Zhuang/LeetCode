// isPalindrome
bool isPalindrome(int x){
    int i;
    int N;
    int output=1;
    int round;
    int ten=1;
    int count=0;
    int k=x;
    int m=x;
    int temp;
    for(i=1;i<=1000000000;i++){
        if(x/10==0){
            N=i;
            break;
        }
        else
            x=x/10;
    }
    for(i=1;i<N;i++){
        ten*=10;
    }
    
    if(N%2==1){
        round=(N-1)/2;
    }
    else
        round=N/2;
    
    do{
        if(m%10==m/ten){
           temp=m/ten;
           m=m-temp*ten;
           m=m/10;
           ten=ten/100;
        }
        else{
            output=0;
            break;
        }
        count+=1;
    }while(count<round);
    
    if(k<0)
        output=0;
    else if(k>0&&k<10)
        output=1;
    
    return output;
}
//

//code for test
#include<stdio.h>

int main(void){
    int x=123321;
   int i;
   int N;
   int output=1;
   int round;
   int ten=1;
   int count=0;
    int k=x;
    int m=x;
    int temp;
   for(i=1;i<=1000000000;i++){
       if(x/10==0){
           N=i;
           break;
       }
       else
           x=x/10;
   }

    for(i=1;i<N;i++){
       ten*=10;
   }
   
   if(N%2==1){
       round=(N-1)/2;
   }
   else
       round=N/2;
   printf("%d\n",ten);
   do{
       printf("%d %d %d\n",m, m%10,m/ten);
       if(m%10==m/ten){
           temp=m/ten;
           m=m-temp*ten;
           m=m/10;
           ten=ten/100;
       }
       
       else{
           output=0;
           break;
       }
       count+=1;
   }while(count<round);
   printf("%d %d %d %d %d\n",N,ten,round,count, output);
   if(k<0)
       output=0;
   else if(k>0&&k<10)
       output=1;
    
    return 0;
}




