#include <stdio.h>
#include <stdbool.h>

#include "bitvector.h"

int main()
{
	int rowArr1[] = {1, 2, 4};
	int colArr1[] = {6};
	int blkArr1[] = {2, 7};
	
	int rowSize1 = 3;
	int colSize1 = 1;
	int blkSize1 = 2;
	
	unsigned int rowSet1 = makeSet(rowArr1, rowSize1);
	unsigned int colSet1 = makeSet(colArr1, colSize1);
	unsigned int blkSet1 = makeSet(blkArr1, blkSize1);
	
	//Possible values are {3, 5, 8, 9}, so it will return false
	bool result1 = isSingle(rowSet1, colSet1, blkSet1);
	if(result1)
		printf("Result 1: True\n");
	else
		printf("Result 1: False\n");
	
	int rowArr2[] = {2, 5, 8};
	int colArr2[] = {1, 3, 4, 5};
	int blkArr2[] = {1, 2, 7, 9};
	
	int rowSize2 = 3;
	int colSize2 = 4;
	int blkSize2 = 4;
	
	unsigned int rowSet2 = makeSet(rowArr2, rowSize2);
	unsigned int colSet2 = makeSet(colArr2, colSize2);
	unsigned int blkSet2 = makeSet(blkArr2, blkSize2);
	
	//Only possible value is 6, so it will return true
	bool result2 = isSingle(rowSet2, colSet2, blkSet2);
	if(result2)
		printf("Result 2: True\n");
	else
		printf("Result 2: False\n");
	
	int rowArr3[] = {1, 2, 4, 5};
	int colArr3[] = {4, 6, 7};
	int blkArr3[] = {3, 6, 8, 9};
	
	int rowSize3 = 4;
	int colSize3 = 3;
	int blkSize3 = 4;
	
	unsigned int rowSet3 = makeSet(rowArr3, rowSize3);
	unsigned int colSet3 = makeSet(colArr3, colSize3);
	unsigned int blkSet3 = makeSet(blkArr3, blkSize3);
	
	//There are no possible values, so it will return false again
	bool result3 = isSingle(rowSet3, colSet3, blkSet3);
	if(result3)
		printf("Result 3: True\n");
	else
		printf("Result 3: False\n");
}

