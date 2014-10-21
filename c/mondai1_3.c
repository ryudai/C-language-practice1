#include <stdio.h>

int main()
{
	int a,i,max;
	max = 0;
	for (i = 0; i < 5; ++i)
	{
		printf("整数の入力:");
		scanf("%d",&a);
		if(a > max)
		{
			max = a;
		}
	}
	printf("max value = %d\n", max);	
	return 0;
}