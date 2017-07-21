#ifndef JIANPUBLIC_COMMON_HJ
#define JIANPUBLIC_COMMON_HJ

#include "commondef.h"

#ifdef __cplusplus
extern "C" {
#endif


#define Min(a, b) (((a)<(b)) ? (a) : (b))

int iThreeMin(int a, int b, int c);

void vSwap(uint8_t & a, uint8_t & b);

void vBubbleSort(uint8_t ai[], uint8_t ucSize);

void vRandomArray(uint8_t aucArray[], uint8_t ucArraySize, uint16_t usRandSeed);

#ifdef __cplusplus
}
#endif

#endif // JIANPUBLIC_COMMON_HJ
