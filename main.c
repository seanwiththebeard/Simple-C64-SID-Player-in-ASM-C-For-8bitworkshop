#include <string.h> 
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

//Following two lines required to make this work in 8bitworkshop IDE
//#link "asm.s"
//#resource "song.sid"

unsigned int SIDSIZE = (1024)*8; 			//8kb should be more than enough
unsigned int SIDLOAD = 0x4000;				//Make sure you offset your sid at $4000 using sidereloc -p 40

void main(void) //Originally int but no return value?
	{
	memcpy((void*)(SIDLOAD),(void*)&SIDFILE,SIDSIZE);	//Load music into memory 
	SIDINIT(); 						//Init SID
	SIDPLAY();						//Play 
	printf("Playing SID\n");	
	}

