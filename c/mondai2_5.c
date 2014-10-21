#include <stdio.h>

int second(int h, int m, int s);

int main(int argc, char const *argv[])
{
	int h, m, s;
	int time_s;

	scanf("%d", &h);
	scanf("%d", &m);
	scanf("%d", &s);

	time_s = second(h, m, s);

	printf("%d\n", time_s);


	return 0;
}

int second(int h, int m, int s)
{
	int time_s;
	m += h * 60;
	s += m * 60;
	time_s = s;

	return time_s;


}