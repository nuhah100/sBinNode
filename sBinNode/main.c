#include <stdio.h>
#include "sBinNode.h"

int main()
{
    sBinNode *firstFather, * secondFather, *FirstSon, *SecondSon;
	firstFather = CreateBinNode("I am The first Father!!!");
	secondFather = CreateBinNode("I am The second Father!!!");
	FirstSon = CreateBinNode("I am The First Son!!!");
	SecondSon = CreateBinNode("I am The Second Son!!!");
	firstFather->left = secondFather;
	firstFather->right = FirstSon;
	secondFather->right = SecondSon;
	PrintBinNode(firstFather);
	PrintBinNode(secondFather);
	PrintBinNode(SecondSon);
	FreeMemory(firstFather);
	printf("Finished\n");
	return 0;
}