








// SwapTree.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include "pch.h"
#include <iostream>
#include <stdio.h>

typedef struct TreeNode {
	char data;
	struct TreeNode *lchild, *rchild;
}TreeNode;

typedef struct {
	TreeNode *root;
}treePtr;

treePtr *swaptree(treePtr *T) {
	TreeNode *t = T->root;



	if (T){

		treePtr *l;
		l->root = t->lchild;
		swaptree(l);

		treePtr *r;
		r->root = t->rchild;
		swaptree(r);

		TreeNode *temp = t->rchild;
		t->rchild = t->lchild;
		t->lchild = temp;
	}

	else {
		return T;
	}
}

int main()
{


}
