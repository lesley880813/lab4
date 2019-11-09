/***************************** Include Files *******************************/
#include "sort_n.h"

/************************** Function Definitions ***************************/


u32 sort_n(UINTPTR baseAddr, u32 data) {
	u32 sorted;
	ADDER_mWriteReg(baseAddr, 0, data);
	ADDER_mWriteReg(baseAddr, 4, 1);
	ADDER_mWriteReg(baseAddr, 4, 0);
	sorted = ADDER_mReadReg (baseAddr, 8);
	ADDER_mWriteReg(baseAddr, 4, 0);
	return sorted;
}