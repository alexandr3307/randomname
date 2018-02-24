#include "kaknibud.h"

int goldaM;
int goldaB;

void setmoney()
{	
	srand(time(NULL));
	goldaB = 10000;
	printf("skok deneg s soboi?\n\n");
	scanf("%d",&goldaM);
	if (goldaM <= 0)
	{
		printf("sanya ti bomz\n\n");
		exit(1);
	}	
}