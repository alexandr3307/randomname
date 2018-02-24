#include "kaknibud.h"

extern int goldaB;
extern int goldaM;

void init()
{
	char string[10];
	printf("igraem, sifozni?\n\n");
	printf("da, net ?\n\n");
	scanf("%s", string);
	if (!strcmp(string, "net"))
	{
		printf("pidora otvet\n\n");  
		exit(2);
	}
	else if (!strcmp(string, "da"))
	{
		printf("U bankira %d deneg\n\nU tebya %d deneg\n\n",goldaB,goldaM);
	}
	else
	{
		printf("error try again\n\n");
		init();
	}
}