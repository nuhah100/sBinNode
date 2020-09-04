#pragma once


typedef struct sBinNode {
	char* str;
	struct sBinNode * left;
	struct sBinNode * right;
} sBinNode;

sBinNode* CreateBinNode(const char *str);

void CreateBinNodeWithSons(sBinNode *father, const char *str, sBinNode *left, sBinNode *right);

void PrintBinNode(sBinNode *node);

void FreeMemory(sBinNode *father);
