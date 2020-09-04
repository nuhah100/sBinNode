#include "sBinNode.h"
#include <stdlib.h>

int CreateBinNode(sBinNode* father, char* str)
{
	father = (sBinNode*)malloc(sizeof(sBinNode));
	father->str = str;
}

int CreateBinNodeWithSons(sBinNode* father, char* str, sBinNode* left, sBinNode* right)
{
	CreateBinNode(&father,str);
	father->left = left;
	father->right = right;
}

int RemoveSon(sBinNode* father, sBinNode* son)
{
	sBinNode* temp(father);
	while (temp)
	{

	}
}

int FreeMemory(sBinNode* father)
{

}



