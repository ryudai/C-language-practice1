#include <stdio.h>
#define N 21


int main()
{
	int fib[N], n, i, j;
	fib[0] = 0; fib[1] = 1;
	for (i = 2; i <= N; i++)
	{
		fib[i] = fib[i - 2] + fib[i - 1];

	}

	scanf("%d", &n);

	for ( j = 0; j <= n; j++)
	{

		printf("%d ", fib[j]);


	}
	return 0;
}