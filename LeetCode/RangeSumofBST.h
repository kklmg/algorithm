#pragma once
#include"stdafx.h"

//938. Range Sum of BST
//https://leetcode.com/problems/range-sum-of-bst/

//Given the root node of a binary search tree, 
//return the sum of values of all nodes with value between L and R(inclusive).

//The binary search tree is guaranteed to have unique values.



//	Example 1:
//  Input: root = [10, 5, 15, 3, 7, null, 18], L = 7, R = 15
//	Output : 32

//	Example 2 :
//	Input : root = [10, 5, 15, 3, 7, 13, 18, 1, null, 6], L = 6, R = 10
//	Output : 23

//Note:
//The number of nodes in the tree is at most 10000.
//The final answer is guaranteed to be less than 2 ^ 31.


namespace p938
{
	class Solution
	{
	public:
		int rangeSumBST(TreeNode* root, int L, int R)
		{
			if (root == nullptr)return 0;
			
			if (L >	root->val) 
			{
				return rangeSumBST(root->right, L, R);
			}

			if (R < root->val) 
			{
				return rangeSumBST(root->left, L, R);
			}
			return root->val + 
				rangeSumBST(root->left, L, R) + rangeSumBST(root->right, L, R);

		}
	};

	void test() 
	{
		return;
	}
}