/*********************************************************************************
* Programmer: Michael Smith														 *
* Class CptS 121, Fall 2017; Lab Section 21										 *
* Programming Assignment: PA5													 *
* Date: October 18, 2017														 *
* Description: This program processes numbers, corresponding to student		     *
* records read in from a file, and writes the required results to an output file.*
**********************************************************************************/

#include "Yahtzee.h"

int main(void)
{
//time seed for ran gen
srand(time(NULL));

// Opens an input file "title.txt" for reading;
FILE *infile = NULL;

//opening infile for reading stream
infile = fopen("title.txt", "r");

//display ASCII Title
display_title(infile);

//closes file
fclose(infile);


//displays menu
display_menu();


return 0;
}
