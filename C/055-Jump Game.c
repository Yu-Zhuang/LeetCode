/*
55. Jump Game
Medium

Given an array of non-negative integers, you are initially positioned at the first index of the array.

Each element in the array represents your maximum jump length at that position.

Determine if you are able to reach the last index.
*/

bool canJump(int* nums, int numsSize){
    int current = -1, limit = 0;
    int target = numsSize - 1;

    do{
        current ++;
        
        int currentLimit = current + nums[current];
        limit = (currentLimit > limit) ? currentLimit : limit;

        if(limit >= target)
            return true;
        
    }while(current < limit);

    return false;
}

/*
Success
Details 
Runtime: 8 ms, faster than 86.32% of C online submissions for Jump Game.
Memory Usage: 6.9 MB, less than 8.02% of C online submissions for Jump Game.
*/