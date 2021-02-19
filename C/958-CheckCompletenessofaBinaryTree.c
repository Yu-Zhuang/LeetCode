/*
958. Check Completeness of a Binary Tree
Given a binary tree, determine if it is a complete binary tree.
Definition of a complete binary tree from Wikipedia:
In a complete binary tree every level, except possibly the last, is completely filled, and all nodes in the last level are as far left as possible. It can have between 1 and 2h nodes inclusive at the last level h.
*/

bool isCompleteTree(struct TreeNode* root){
    if(root == NULL)
    	return true;

    struct TreeNode list[100]; 
    int root_posi = 0,\ // root position
    	flag = 0,\ 
    	count = 1; // element numbers of the list

    list[count] = root[0]; // put the first root to list
    while(count>root_posi){ 
    	if(root->left){
    		if(flag)
    			return false;
    		list[count] = root->left[0];
    		count ++;
    	}else
    		flag = 1;

    	if(root->right){
    		if(flag)
    			return false;
    		list[count] = root->right[0];
    		count ++;
    	}else
    		flag = 1;

    	root_posi += 1;
    	root = &list[root_posi];
    }

    return true;
}
/*
Runtime: 0 ms, faster than 100.00% of C online submissions for Check Completeness of a Binary Tree.
Memory Usage: 6.4 MB, less than 100.00% of C online submissions for Check Completeness of a Binary Tree.
*/
