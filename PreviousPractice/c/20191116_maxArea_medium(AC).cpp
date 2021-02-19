//
int maxArea(int* height, int heightSize){
    int i,j;
    int output;
    int temp=0;
    for(i=0;i<heightSize;i++){
        for(j=i+1;j<heightSize;j++){
            if(height[i]>height[j])
                output=(j-i)*height[j];
            else
                output=(j-i)*height[i];
            if(output>=temp)
                temp=output;
        }
    }
    return temp;
}
/*0ms solution
 int maxArea(int* heights, int size)
 {
     int l=0, r=size-1;
     int max = 0;
     while(l < r)
     {
         int area = (r-l)*(heights[l] < heights[r]? heights[l++] : heights[r--]);
         max = max > area? max : area;
     }
     return max;
 }
 */
