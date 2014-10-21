#include <stdio.h>

main()
{
	int y;
	scanf("%d" , &y);
	printf("%d dollar %d cent\n", y/100, (y%110) * 100/110);

}