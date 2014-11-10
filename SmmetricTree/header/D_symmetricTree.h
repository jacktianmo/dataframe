
/*
 * D_symmetricTree.h
 *
 *  Created on: 2014年11月10日
 *      Author: young
 */

#ifndef D_SYMMETRICTREE_H_
#define D_SYMMETRICTREE_H_

#include<iostream>
#include<stack>
using namespace std;


struct TreeNode{
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x):val(x),left(NULL),right(NULL){}
};

class solution{
public:
	bool isSymmetric(TreeNode *root){
		if(root == NULL)
			return true;
	return helper(*root->left,*root->right);
	}
	private:
		bool helper(TreeNode leftN,TreeNode rightN){
				if(leftN==NULL && rightN==NULL)
					return true;
				if(leftN==NULL || rightN==NULL)
					return false;
				if(leftN.val!=rightN.val)
					return false;
				return helper(*leftN.left,*rightN.right) && helper(*leftN.right,*rightN.left);
			}
};





#endif /* D_SYMMETRICTREE_H_ */
