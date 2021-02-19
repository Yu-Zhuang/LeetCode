/*42. Trapping Rain Water
Hard
Given n non-negative integers representing an elevation map where the width of each bar is 1, compute how much water it can trap after raining.
*/

package main

import "fmt"

func main() {
	nums := []int{0,1,0,2,1,0,1,3,2,1,2,1}
	fmt.Println("finish: ", trap(nums))
}

func trap(height []int) int {
	l := len(height)
	if l < 3 {
		return 0
	}

	ret := 0
	mxLeft, mxRight := make([]int,l), make([]int, l)

	mxLeft[0] = height[0]
	mxRight[l-1] = height[l-1]

	for i := 1; i < l; i++ {
		mxLeft[i] = max(height[i], mxLeft[i-1])
	}
	for i := len(height)-2; i>=0; i-- {
		mxRight[i] = max(height[i], mxRight[i+1])
	}
	for i, _ := range height {
		ret += min(mxRight[i], mxLeft[i]) - height[i]
	}

	return ret
}

func max(v1, v2 int) int {
	if v1 > v2 {
		return v1
	}
	return v2
}

func min(v1, v2 int) int {
	if v1 < v2 {
		return v1
	}
	return v2
}
/*
Success
Details 
Runtime: 4 ms, faster than 84.42% of Go online submissions for Trapping Rain Water.
Memory Usage: 3.2 MB, less than 35.35% of Go online submissions for Trapping Rain Water.
*/
