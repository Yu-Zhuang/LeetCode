/*
226. Invert Binary Tree
Example:
Input:

     4
   /   \
  2     7
 / \   / \
1   3 6   9
Output:

     4
   /   \
  7     2
 / \   / \
9   6 3   1
Trivia:
This problem was inspired by this original tweet by Max Howell:
Google: 90% of our engineers use the software you wrote (Homebrew), but you can’t invert a binary tree on a whiteboard so f*** off.
*/

struct TreeNode* invertTree(struct TreeNode* root){
    if(root != NULL){
        root->left = invertTree(root->left);
        root->right = invertTree(root->right);
        struct TreeNode *tmp = root->left;
        root->left = root->right;
        root->right = tmp;
        return root;
    }
    return NULL;
}

/*
Success
Details 
Runtime: 0 ms, faster than 100.00% of C online submissions for Invert Binary Tree.
Memory Usage: 5.5 MB, less than 66.87% of C online submissions for Invert Binary Tree.
*/