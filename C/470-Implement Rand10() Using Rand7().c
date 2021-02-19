/* 470. Implement Rand10() Using Rand7()
Medium
Given the API rand7() that generates a uniform random integer in the range [1, 7], write a function rand10() that generates a uniform random integer in the range [1, 10]. You can only call the API rand7(), and you shouldn't call any other API. Please do not use a language's built-in random API.
Each test case will have one internal argument n, the number of times that your implemented function rand10() will be called while testing. Note that this is not an argument passed to rand10().

Follow up:
What is the expected value for the number of calls to rand7() function?
Could you minimize the number of calls to rand7()?
*/
int rand10() {
	while(1){
		int base = 7 * (rand7()-1);
		int compent = rand7()-1;
		if(base + compent < 40)
			return (base + compent) % 10 + 1;
	}
}
/*
Success
Runtime: 56 ms, faster than 50.25% of C online submissions for Implement Rand10() Using Rand7().
Memory Usage: 12.1 MB, less than 5.59% of C online submissions for Implement Rand10() Using Rand7().
*/