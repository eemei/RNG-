#include "RNG.h"
#include "Rcc.h"

int main(){
	int statusREG;
	int dataREG;

	enableRNG();
	while(1){
		statusREG = RNG_reg->RNG_SR;
		statusREG &= 1;
		if(statusREG == 1){
			dataREG = RNG_reg->RNG_DR;
		}

	}
}
