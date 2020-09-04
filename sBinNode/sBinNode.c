#include "sBinNode.h"
#include <stdlib.h>
#include <stdio.h>



sBinNode* CreateBinNode(const char* str)
{
	sBinNode* father = (sBinNode*) malloc(sizeof(sBinNode));
	father->str = str;
	father->left = NULL;
	father->right = NULL;
	return father;
}

void CreateBinNodeWithSons(sBinNode* father,const char* str, sBinNode* left, sBinNode* right)
{
	if(!father)
		father = CreateBinNode(str);
	father->left = left;
	father->right = right;
}

void PrintBinNode(sBinNode* node)
{
	if (node->left != NULL && node->right != NULL)
		printf("The Content of the node is: %s \n and his two sons: \n left = %p \n right = %p \n",node->str,node->left,node->right);
	else
	{
		if (node->left != NULL)
			printf("The Content of the node is: %s \n and his one son: \n left = %p\n", node->str, node->left);
		else if (node->right != NULL)
			printf("The Content of the node is: %s \n and his one son: \n right = %p\n", node->str, node->left);
		else
			printf("The Content of the node is: %s \n and has no sons.\n", node->str);
	}
}


void FreeMemory(sBinNode* father)
{
	sBinNode *tempL, *tempR;

	if (father != NULL)
	{
 		tempL = father->left;
		tempR = father->right;
		free(father);
		FreeMemory(tempL);
		FreeMemory(tempR);
	}
}



