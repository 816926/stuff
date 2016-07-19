#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdbool.h>

void wc ( FILE *infile, char *inname);

int
main (int argc, char *argv[]) {

if (argc < 1)
{

} 


    
}

void
wc( FILE *infile, char *inname) {
       
infile = fopen (inname, "r");

int words = 0;
int lines = 0;
int chars = 0;
int c;
bool isspace = true;

	if(c = fgetc(infile) != EOF)
	{		
		if(isspace=false)
		{
			words++
		}

		if( c = " " || c = "\n")
		{	
			lines++;
		}	

	}
    
}
