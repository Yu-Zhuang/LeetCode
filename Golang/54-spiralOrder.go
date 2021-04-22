/*
54. Spiral Matrix
Given an m x n matrix, return all elements of the matrix in spiral order.
*/
func spiralOrder(matrix [][]int) []int {
    mlen := len(matrix)
    nlen := len(matrix[0])
    totalNum := mlen * nlen
    getNum := 0
    round := 0
    flag := 1
    ret := []int{}
    for flag == 1 {
        for i := round; i < nlen-round; i++ {
            ret = append(ret, matrix[round][i])
            if getNum++; getNum == totalNum {
                flag = 0
                break
            }
        }
        if flag == 0 {
            break
        }
        for i := round+1; i < mlen-round-1; i++ {
            ret = append(ret, matrix[i][nlen-round-1])
            if getNum++; getNum == totalNum {
                flag = 0
                break
            }
        }
        if flag == 0 {
            break
        }
        for i := nlen-1-round; i>=round; i-- {
            ret = append(ret, matrix[mlen-round-1][i])
            if getNum++; getNum == totalNum {
                flag = 0
                break
            }
        }
        if flag == 0 {
            break
        }
        for i := mlen-2-round; i > round; i-- {
            ret = append(ret, matrix[i][round])
            if getNum++; getNum == totalNum {
                flag = 0
                break
            }
        }            
        round++
    }

    return ret
}
/*
Success
Runtime: 0 ms
Memory Usage: 2 MB
*/