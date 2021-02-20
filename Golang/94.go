/*
94. Binary Tree Inorder Traversal
Medium
Given the root of a binary tree, return the inorder traversal of its nodes' values.
*/
func inorderTraversal(root *TreeNode) []int {
	var s []int

    if root != nil {
    	inorder(root, &s)
    }

    return s
}

func inorder(r *TreeNode, s *[]int) {
	if r == nil { return }
	inorder(r.Left, s)
	push(s, r.Val)
	inorder(r.Right, s)
}

func push(s *[]int, v int) {
	*s = append(*s, v)
}

/*
Success
Details 
Runtime: 0 ms
Memory Usage: 2 MB
*/
