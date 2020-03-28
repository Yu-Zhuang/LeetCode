//
int reverse(long int x){
    int i,j;
    int n=0,m;
    long int nine=9,ten=100;
    long int temp;
    long int sum=0;
    long int k;

    k=x;

    if(x<0) //如果x<0則*-1
        k=x*(-1);

    if(x>0&&x<10){ //判斷有幾位數
        n=1;
    }
    else{//判斷有幾位數
        for(i=2;i<=12;i++){
            if(k>nine&&k<ten){
                n=i;
                break;
            }
            nine=nine*10+9;
            ten=ten*10;
        }
    }
    
    m=n;
    for(i=0;i<n;i++){ //倒轉
        temp=k%10;
        k=k/10;
        for(j=1;j<m;j++){
            temp=temp*10;
        }
        m=m-1;
        sum+=temp; //加到sum
            
    }
    if(x<0) //x<0 把-1乘回來
        sum=sum*(-1);
    if(sum>=2147483648||sum<=-2147483648) //超出範圍就歸零
        sum=0;
    return sum; //output
}
/*
 Given a 32-bit signed integer, reverse digits of an integer.

 Example 1:

 Input: 123
 Output: 321
 Example 2:

 Input: -123
 Output: -321
 Example 3:

 Input: 120
 Output: 21
 
 Note:
 Assume we are dealing with an environment which could only store integers within the 32-bit signed integer range: [−231,  231 − 1]. For the purpose of this problem, assume that your function returns 0 when the reversed integer overflows.
 */
