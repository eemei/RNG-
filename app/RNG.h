#ifndef __RNG_H__
#define __RNG_H__
#include <stdint.h>

typedef struct RNG_t RNG_reg;
struct RNG_t{
	volatile uint32_t RNG_CR;
	volatile uint32_t RNG_SR;
	volatile uint32_t RNG_DR;
};

#define RNG_reg	((RNG_reg*)0x50060800)
void enableRNG();

#endif // __RNG_H__
