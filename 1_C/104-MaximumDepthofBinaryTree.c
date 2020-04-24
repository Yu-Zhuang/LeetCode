/*
104. Maximum Depth of Binary Tree
Given a binary tree, find its maximum depth.

The maximum depth is the number of nodes along the longest path from the root node down to the farthest leaf node.

Note: A leaf is a node with no children.

Example:

Given binary tree [3,9,20,null,null,15,7],

    3
   / \
  9  20
    /  \
   15   7
return its depth = 3.
*/

int maxDepth(struct TreeNode* root){
    if(!root) return 0;
    
    int rh=1+maxDepth(root->right);
    int lh=1+maxDepth(root->left);
    
    return (rh>lh)? rh : lh;
}
/*
Runtime: 4 ms, faster than 92.19% of C online submissions for Maximum Depth of Binary Tree.
Memory Usage: 7.7 MB, less than 100.00% of C online submissions for Maximum Depth of Binary Tree.
*/