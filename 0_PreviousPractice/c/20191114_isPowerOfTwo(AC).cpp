//

bool isPowerOfTwo(int n){
    int ans=0;
    long int i;
    int count=0;
    for(i=2;i<=n;i=i*2){
        count+=1;
        if(i==n){
            ans=1;
        }
    }
    if(n==1)
        ans=1;
    return ans;
}
