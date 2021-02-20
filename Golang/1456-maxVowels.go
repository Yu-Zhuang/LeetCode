/*
1456. Maximum Number of Vowels in a Substring of Given Length
Medium
Given a string s and an integer k.
Return the maximum number of vowel letters in any substring of s with length k.
Vowel letters in English are (a, e, i, o, u).
*/

func maxVowels(s string, k int) int {

	ret := 0
	list := map[byte]int{
		'a':1,
		'e':1,
		'i':1,
		'o':1,
		'u':1,
	}

	cnt := 0
	for i, _ := range s{
		if _, has := list[s[i]]; has {
			cnt += 1
		}
		if i >= k {
			if _, has := list[s[i-k]]; has {
				cnt -= 1
			}
		}
		if cnt > ret {
			ret = cnt
			if ret == k { break }
		}
	}

    return ret
}

/* Result
Success
Runtime: 28 ms, faster than 24.00% of Go online submissions for Maximum Number of Vowels in a Substring of Given Length.
Memory Usage: 5.4 MB, less than 20.00% of Go online submissions for Maximum Number of Vowels in a Substring of Given Length.
*/
