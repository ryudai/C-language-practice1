#include <stdio.h>

int main(int argc, char const *argv[])
{
	int a, b;
	int i;

	scanf("%d", &a);

	for(i = 1; i <= a; i++){
		b = a % i;
		if(b == 0){
			printf("%d\n", i);
		}
	}
	return 0;
}