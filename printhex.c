#include "decrypt.h" 
#include <ctype.h>
#include <stdio.h>

void PrintHex(int fileSize, unsigned char* charBuffer)
{ //Start PrintHex
	unsigned int counter;             //characters iterator
	const int linewidth = 16;        //Width of line
	
	for (counter = 0; counter < fileSize-1; counter++) //loop through each character
	{
		if (0 == counter % (linewidth/2)) // if character position is at the centre middle of line
		{
			printf(" "); //print a space 
		}
		if(0 == (counter % linewidth)) // If there is no remainder, i.e every 16 times
		{
			printf("\n%06x  %02x ", counter, charBuffer[counter]); //printing index followed by hexa format of characters
		} 		   
		else
		{
			printf("%02x ", charBuffer[counter]); //print the hexadecimal format of each character
		}
	}
	printf("\n"); // print new line 

}// End PrintHex
