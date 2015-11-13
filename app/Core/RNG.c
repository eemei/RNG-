#include "RNG.h"

void enableRNG(){
	RNG_reg->RNG_CR = 0x00000004;;
}
