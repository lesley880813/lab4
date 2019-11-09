/***************************** Include Files *******************************/
#include "hash_n.h"

/************************** Function Definitions ***************************/


u64 hash_n(UINTPTR baseAddr, unsigned char *str) {

	u64 hash = 5381;
	ADDER_mWriteReg(baseAddr, 4, 1);//in_data_ready
	ADDER_mWriteReg(baseAddr, 0, hash);
	u32 c;
	while (c = *str++){
	ADDER_mWriteReg(baseAddr, 0, c);

	}
	u64 answer=ADDER_mReadReg64(baseAddr, 8)
	ADDER_mWriteReg(baseAddr, 4, 0);
    return answer;
}