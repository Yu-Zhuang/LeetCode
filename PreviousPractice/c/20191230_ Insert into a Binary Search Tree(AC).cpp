


struct TreeNode* insertIntoBST(struct TreeNode* root, int val){
    int flag=1;
    struct TreeNode *ret=root;
    while(flag){
        if(val>root->val){
            if(root->right==NULL){
                struct TreeNode* newnode=(struct TreeNode*)malloc(sizeof(struct TreeNode));
                newnode->val=val; newnode->left=NULL; newnode->right=NULL;
                root->right=newnode;
                flag=0;
            }
            else root=root->right;
        }else if(val<root->val){
            if(root->left==NULL){
                struct TreeNode* newnode=(struct TreeNode*)malloc(sizeof(struct TreeNode));
                newnode->val=val; newnode->left=NULL; newnode->right=NULL;
                root->left=newnode;
                flag=0;
            }
            else root=root->left;
        }else if(root->val==val) break;
    }
    return ret;
}



/*
Given the root node of a binary search tree (BST) and a value to be inserted into the tree, insert the value into the BST. Return the root node of the BST after the insertion. It is guaranteed that the new value does not exist in the original BST.

Note that there may exist multiple valid ways for the insertion, as long as the tree remains a BST after insertion. You can return any of them.

For example,

Given the tree:
        4
       / \
      2   7
     / \
    1   3
And the value to insert: 5
You can return this binary search tree:

         4
       /   \
      2     7
     / \   /
    1   3 5
This tree is also valid:

         5
       /   \
      2     7
     / \
    1   3
         \
          4
*/

