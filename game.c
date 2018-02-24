#include "kaknibud.h"

extern int goldaB;
extern int goldaM;
extern int stavka;

int game()
{
	char string[10];
	int sum = 0;
	sum=karta(sum);
	printf("tvoi chet:%d\n\n",sum);
	do
	{ 
		printf("beresh eshe kartu?\n\n");
		printf("da, net ?\n\n");
		scanf("%s", string);
		if(!strcmp(string, "net"))
		{
			break;
		}
		sum=karta(sum);
		printf("tvoi chet: %d\n\n",sum);
   	  	if (sum>21)
		{
			printf("ti proebal, dolbaeb\n\n");
			goldaB += stavka;
		  	exit(0); 
	  	}	 	
	}while (1); 
	return sum;
}