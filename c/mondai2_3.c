#include <stdio.h>

int main()
{
	int i,j;
	for (i= 1; i <= 9; ++i)
	{

		for (j = 1; j <= i; ++j)
		{
			printf("%d/%d = %1.2f ",j,i, (float)j / i );
		}
		printf("\n");
	}
	return 0;
}