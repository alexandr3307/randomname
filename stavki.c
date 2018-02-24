#include "kaknibud.h"
int stavka;
extern int goldaM;

void setstavka()
{
	do
	{
		printf("tvoya stavka?\n\n");
		scanf("%d",&stavka);
		if (stavka<0)
		{
			printf("nado sdelat stavku\n\n");
		}
		else if (stavka>goldaM)
		{
			stavka = 0;
			printf("u vas net deneg na takuiu stavku\n\n");
		}
       	else goldaM -= stavka;
	}while (stavka<=0);
}