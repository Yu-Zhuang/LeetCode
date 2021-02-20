/*46. Permutations
Medium
Given an array nums of distinct integers, return all the possible permutations. You can return the answer in any order.
*/

package main

import "fmt"

func main() {
	nums := []int{1,2,3}
	fmt.Println("Result:--- ", permute(nums))
}

func permute(nums []int) [][]int {
    var ret [][]int
    var path []int
    dfs(nums, path, &ret)
    return ret
}

func dfs(nums []int, path []int, ret *[][]int) {
	l := len(nums)
	if l == 0 {
		*ret = append(*ret, path)
		return
	}
	for i:=0; i<l; i++ {
		nNums := append(append([]int{}, nums[:i]...), nums[i+1:]...)
		nPath := append(path, nums[i])
		dfs(nNums, nPath, ret)
	}
}

/*
Success
Details 
Runtime: 0 ms, faster than 100.00% of Go online submissions for Permutations.
Memory Usage: 2.7 MB, less than 42.76% of Go online submissions for Permutations.
*/
