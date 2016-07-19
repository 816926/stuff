#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdbool.h>

void wc ( FILE *infile, char *inname);

int
main (int argc, char *argv[]) {

if (argc <= 1)
{

}
else
{
	int i = 1;
	while(i < argc){
		FILE *infile = NULL;
		infile = fopen(argv[i], "r");
		wc(infile,argv[i]);
		i++;
	}
}

}

void
wc( FILE *infile, char *inname) {
int words = 0;
int lines = 0;
int chars = 0;
int c;
bool isspace = false;

	while((c = fgetc(infile)) != EOF){
		chars++;		
		if(isspace(c))
		{
			if(isspace == false)
				words++;
			isspace = true;
		}
		else
			isspace = false;

		if( c == '\n')
		{	
			lines++;
		}	
	}
	printf(" %d %d %d %s\n",lines,words,chars,inname);    
}
