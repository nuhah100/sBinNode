#pragma once
#include <stddef.h>

typedef struct sBinNode {
	char* str;
	struct sBinNode * left;
	struct sBinNode * right;
} sBinNode;

void* Alloc(size_t y);

void Free(void* _block);

sBinNode* CreateBinNode(const char *str);

void PrintBinNode(sBinNode *node);

void FreeMemory(sBinNode *father);
