#include <stdio.h>
#include <math.h>

int main()
{
	double d,r;
	scanf("%lf %lf", &d, &r);
	double D = d * M_PI / 180;
	printf("x = %.2f y = %.2f", r * cos(D),r * sin(D) );
	return 0;
}