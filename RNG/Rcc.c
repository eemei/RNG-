#include "Rcc.h"
#include "RNG.h"

void gpioUnresetEnableClock(){
	RCC_reg->RCC_AHB2RSTR &= ~(1 << 6);
	RCC_reg->RCC_AHB2RSTR |= (0 << 6);
	RCC_reg->RCC_AHB2ENR &= ~(1<< 6);
	RCC_reg->RCC_AHB2ENR |= (1 << 6);
}
