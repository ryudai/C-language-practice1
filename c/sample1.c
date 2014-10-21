#include <stdio.h>

main()
{
	//int fahr = 100;
	int fahr;
	scanf("%d , &fahr");

	printf("%5d/t%6.2f\n", fahr, (5.0 / 9.0) * (fahr - 32.0));
}