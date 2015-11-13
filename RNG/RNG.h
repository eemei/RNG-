#ifndef __RNG_H__
#define __RNG_H__
#include <stdint.h>

typedef struct RNG_t RNG;
struct RNG_t{
	volatile uint32_t RNG_CR;
	volatile uint32_t RNG_SR;
	volatile uint32_t RNG_DR;
};

#define RNG_reg	((RNG*)0x50060800)
enableRNG();

#endif // __RNG_H__
