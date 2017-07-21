#include "common.h"

int iThreeMin(int a, int b, int c)
{
	int t = Min(a, b);
	int iMin = Min(t, c);
	return iMin;
}

void vSwap(uint8_t & a, uint8_t & b)
{
	uint8_t temp = a;
	a = b;
	b = temp;
}

void vBubbleSort(uint8_t ai[], uint8_t ucSize)
{
	for (uint8_t i = 0; i < ucSize; i++)
	{
		for (uint8_t j = 1; j < ucSize - i; j++)
		{
			if (ai[j - 1] > ai[j])
			{
				vSwap(ai[j - 1], ai[j]);
			}
		}
	}
}

void vRandomArray(uint8_t aucArray[], uint8_t ucArraySize, uint16_t usRandSeed)
{
	srand((unsigned int)(time(0) + usRandSeed));
	for (uint8_t i = 0; i < ucArraySize; i++)
	{
		uint8_t index = (uint8_t)(rand() % ucArraySize);
		if (i != index)
		{
			vSwap(aucArray[i], aucArray[index]);
		}
	}
}

