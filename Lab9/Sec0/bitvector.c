#include <stdbool.h>

#include "bitvector.h"

unsigned short makeSet(int values[], int nvalues)
{
	unsigned short value = 0;
	
	//OR the bit with 1 if it's on the list
	for(int i = 0; i < nvalues; i++)
		value |= (1 << values[i]);
	
	return value;
}

bool isSingle(unsigned short rowUsed, unsigned short colUsed, unsigned short blkUsed)
{
	//OR all the used values and NOT them to get unused values
	unsigned short possible = ~(rowUsed | colUsed | blkUsed);
	
	//Count unused values by SHIFTing and ANDing
	int count = 0;
	for(int i = 1; i <= 9; i++)
		if((possible & (1 << i)) != 0)
			count++;
	
	//Return accordingly
	if(count == 1)
		return true;
	else
		return false;
}
