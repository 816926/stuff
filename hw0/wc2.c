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
		while (i < argc)
		{
			FILE *infile;
			infile = fopen(argv[i],"r");
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
int c,cb;
bool isspace = false;

	while((c = fgetc(infile)) != EOF)
	{
		chars++;
		if(c == '\n')
		{
			lines++;
		}
		//now words
		if(isspace(c) && !isspace(cb))
		{
			//if(isspace == false)
			//{
			words++;
			//isspace== true;
			//}
			
				
		}

			//isspace = false;
		/*else
		{
						
		}*/		
	cb=c;
	}
	printf("%d %d %d %s\n ", lines, words, chars,inname);
}
