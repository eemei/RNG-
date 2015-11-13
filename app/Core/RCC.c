#include "RCC.h"
#include "RNG.h"


void UnresetEnableClock(){
	RCC_reg->RCC_AHB2RSTR &= ~(1 << 6);
	RCC_reg->RCC_AHB2RSTR |= (0 << 6);
	RCC_reg->RCC_AHB2ENR &= ~(1<< 6);
	RCC_reg->RCC_AHB2ENR |= (1 << 6);
}
