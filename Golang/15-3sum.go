
import "sort"

func threeSum(nums []int) [][]int {
	var ret [][]int
	nlen := len(nums)
	// sort nums
	sort.Ints(nums)
	// go through nums with two-pointer
	for i := 0; i < nlen; i++ {
		if i > 0 && nums[i] == nums[i-1] {
			continue
		}
		start := i + 1
		end := nlen - 1
		for start < end {
			if nums[start]+nums[end]+nums[i] == 0 {
				ele := []int{nums[start], nums[end], nums[i]}
				ret = append(ret, ele)
				start++
				end--
				for nums[start-1] == nums[start] && start < end {
					start++
				}
				for nums[end+1] == nums[end] && start < end {
					end--
				}
			}
			if nums[start]+nums[end]+nums[i] < 0 {
				start++
				for nums[start-1] == nums[start] && start < end {
					start++
				}
			}
			if nums[start]+nums[end]+nums[i] > 0 {
				end--
				for nums[end+1] == nums[end] && start < end {
					end--
				}
			}
		}
	}

	return ret
}
