// ALBERT - ALBERT Likes to Be an Experimental Robotic Thing
// LEdoian..CZ
// v. 0.0.1

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"LE_low.h"
#include"LE_shared.h"

int main(int argc, char argv[][]){
	if(!LE_Connect_ALBERT("MAC")) LE_Problem("Nepodařilo se připojit k ALBERTovi", 5);
	
	
	return EXIT_SUCCESS;
}
