#ifndef __BINARYTREEMIRROR_H__
#define __BINARYTREEMIRROR_H__

#include <iostream>
using namespace std;

struct BinaryTreeNode
{
	int _data;
	BinaryTreeNode* _left;
	BinaryTreeNode* _right;
};

void BinaryTreeMirror(BinaryTreeNode* pRoot)
{
	if (pRoot == NULL)
		return;
	if (pRoot->_left == NULL && pRoot->_right == NULL)
		return;

	//½»»»×óÓÒ×ÓÊ÷
	BinaryTreeNode* tmp = pRoot->_left;
	pRoot->_left = pRoot->_right;
	pRoot->_right = tmp;

	if (pRoot->_left != NULL)
		BinaryTreeMirror(pRoot->_left);

	if (pRoot->_right != NULL)
		BinaryTreeMirror(pRoot->_right);
}

#endif //__BINARYTREEMIRROR_H__