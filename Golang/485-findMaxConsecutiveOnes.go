/*
485. Max Consecutive Ones
Easy
Given a binary array, find the maximum number of consecutive 1s in this array.
*/

func findMaxConsecutiveOnes(nums []int) int {
    max := 0
    cnt := 0
    
    for _, j := range nums {
        if j == 1 {
            cnt ++
            if cnt > max {
                max = cnt
            }
        } else {
            cnt = 0
        }
    }
    
    return max
}

/* Result
Success
Runtime: 40 ms, faster than 68.67% of Go online submissions for Max Consecutive Ones.
Memory Usage: 6.4 MB, less than 16.22% of Go online submissions for Max Consecutive Ones.*/
