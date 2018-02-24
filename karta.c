#include "kaknibud.h"

int karta(int sum) //Принимает старую сумму очков, рандомит карту, выдает новую сумму
{
	int a;
	a=rand()%10+2;
 	switch (a)
	{
        case 2: printf("vipal valet\n\n"); sum+=a; break;
        case 3: printf("vipala dama\n\n"); sum+=a; break;
        case 4: printf("vipal korol\n\n"); sum+=a; break;
        case 6: printf("vipala 6\n\n"); sum+=a; break;
        case 7: printf("vipala 7\n\n"); sum+=a; break;
        case 8: printf("vipala 8\n\n"); sum+=a; break;
        case 9: printf("vipala 9\n\n"); sum+=a; break;
        case 10: printf("vipala 10\n\n"); sum+=a; break;
        case 11: printf("vipal tuz\n\n"); sum+=a; break;
        //Если 5 пытаемся еще раз
		default: sum = karta(sum);
    } 
	return(sum);			  
}
