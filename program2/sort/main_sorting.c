#include <stdio.h>
#include "xil_printf.h"
#include "xil_io.h"
#include "xparameters.h"
#include "sorting.h"
int main(){
	u32 temp=0;
	u32 final=0;
	for(int i=0;i<8;i++){
		printf("please enter the %d number:\n",i);
		scanf("%d",&temp);
		final=final+(temp<<(4*i));
	}
	//int x = (number >> (8*n)) & 0xff;

	final = sort_n(XPAR_ADDER_0_S00_AXI_BASEADDR, final);
	for(int i=0;i<8;i++){
		printf("number %d:%d ",i,(final >> (4*i)) & 0xf);
	}


}