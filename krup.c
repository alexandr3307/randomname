#include "kaknibud.h"
extern int goldaB;
extern int goldaM;
extern int stavka;

void gamekrup(int sum)
{	
	// chanceb - шанс того, что крупье возьмет карту(фиксированный в зависимости от набранной суммы(в процентах)) 
	//b - решение банкира на основании chanceb продолжать игру или нет
	int sumkrup = 0;
	int b;
	int chanceb;
	int	krup = 0;
	printf("igraet bankir\n\n");
	//»игра банкира (после остальных игроков (пока игрок один и это сука ты))
	while (krup==0)
	{
		if (sumkrup<11) chanceb=100;
		else if (sumkrup<14) chanceb=80;      // ќценка шансов выигрыша
		else if (sumkrup<17) chanceb=50;
		else if (sumkrup<20) chanceb=10;	
		else chanceb=0; 
		b=rand()%100+1;  
		if (b>chanceb) krup=1; 	//Ѕанкир заканчивает набор и сумма осталась меньше 22
			else 
			{
				sumkrup=karta(sumkrup);
				printf("chet vraga: %d\n\n",sumkrup);
				if (sumkrup>21)
				{	
					krup=2; // 2-означает проигрыщ банкира
				}
			}	 
	}
	if (krup==2)
	{
		printf("Bankir proigral\n\n");
		goldaB -= stavka;
		goldaM += 2 * stavka;
	}
	else if (sumkrup<sum) 
	{ 
		printf("igra okonchena\n\ntvoi schet: %d chet bankira: %d\n\n ti zavinil\n\n",sum,sumkrup);
		goldaB -= stavka;
		goldaM += 2 * stavka;
	}
	else
	{
		printf("ti proebal, dolbaeb\n\n");
		goldaB += stavka;
	}
}