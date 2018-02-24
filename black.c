#include "kaknibud.h"

int main(void)
{
	int sum;
	setmoney();
	init();
	setstavka();
	sum = game();  
	gamekrup(sum);	
	return 0;
}


