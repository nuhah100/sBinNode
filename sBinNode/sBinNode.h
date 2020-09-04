#pragma once


typedef struct {
	char* str;
	sBinNode* left;
	sBinNode* right;
} sBinNode;
/// <summary>
/// Create Binary node and sets it's sons to null. 
/// </summary>
/// <param name="father">node</param>
/// <param name="str">node value</param>
/// <returns>return 0 if no errors, otherwise -1.</returns>
int CreateBinNode(sBinNode* father, char* str);

int CreateBinNodeWithSons(sBinNode* father, char* str, sBinNode* left, sBinNode* right);

int RemoveSon(sBinNode* father, sBinNode* son);

int FreeMemory(sBinNode* father);
