#include <stdio.h>

main()
{
	double y, rate = 108.82;
	scanf("%lf",&y);
	printf("%d dolar %d cent\n",(int)(y * 100 / rate) / 100 ,(int)(y * 100 / rate) % 100);
	return 0;

}