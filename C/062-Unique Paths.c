/* Question
62. Unique Paths
Medium
Add to List
A robot is located at the top-left corner of a m x n grid (marked 'Start' in the diagram below).
The robot can only move either down or right at any point in time. The robot is trying to reach the bottom-right corner of the grid (marked 'Finish' in the diagram below).
How many possible unique paths are there?
*/

long long int factorial(int num, int min){
    if(num == min)
    	return min;
    return num*factorial(num-1, min);
}

int uniquePaths(int m, int n){
	if(m==1 || n==1)
		return 1;
    if(m>n){
		return (int)(factorial((m-1)+(n-1), m)/factorial(n-1, 1));
    }
	else{
		return (int)(factorial((m-1)+(n-1), n)/factorial(m-1, 1));
	}
}

/* Result
Success
Details 
Runtime: 0 ms, faster than 100.00% of C online submissions for Unique Paths.
Memory Usage: 5.3 MB, less than 29.06% of C online submissions for Unique Paths.
*/