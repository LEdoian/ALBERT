// LE_ALBERT_low.h - low-level back-end functions for ALBERT software
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "LE_ALBERT_const.h"
#include "LE_shared.h"

#ifndef LE_ALBERT_LOW_H
#define LE_ALBERT_LOW_H

int LE_ALBERT_GetMAC(){
	//NYI
	return rand(); /*Function must return a value :) */
}

int LE_ALBERT_Connect(int MAC){
	//NYI
	//return EXIT_SUCCESS;
	return EXIT_FAILURE;
}

FILE* LE_ALBERT_ConnectionInit(void){
	int LE_ALBERT_MAC ;//Need to allocate 48 bits (=6 bytes of the MAC addr.), need a book or other reference :)
	LE_ALBERT_MAC = LE_ALBERT_GetMAC();
	if(LE_ALBERT_Connect(LE_ALBERT_MAC)) LE_Problem(LE_ALBERT_CannotConnect, LE_ALBERT_CannotConnectErrNum);
	return 1;/*NYI, Function must return a value :) */
}


#endif //! LE_ALBERT_LOW_H
