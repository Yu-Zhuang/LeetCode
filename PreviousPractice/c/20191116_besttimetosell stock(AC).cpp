//
int maxProfit(int* prices, int pricesSize){
    int i,j;
    int output=0;
    
    for(i=0;i<pricesSize;i++){
        for(j=i+1;j<pricesSize;j++){
            if(i==j||prices[j]<prices[i])
                continue;
            if(prices[j]-prices[i]>=output)
                output=prices[j]-prices[i];
        }
    }
  return output;
}
