// ALBERT - ALBERT Likes to Be an Experimental Robotic Thing
// LEdoian..CZ
// v. 0.0.1

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"LE_ALBERT_low.h"
#include"LE_ALBERT_const.h"
#include"LE_shared.h"

int main(int argc, char** argv){
	if(LE_ALBERT_ConnectionInit(123456789987654321)) LE_Problem(LE_ALBERT_CannotConnect, LE_ALBERT_CannotConnectErrNum);
	
	
	return EXIT_SUCCESS;
}
