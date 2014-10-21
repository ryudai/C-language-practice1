#include <stdio.h>

int main()
{
	double data[5][3];
	int i;
	double h, w;
	h = 0;
	w = 0;

	for (i = 0; i < 5; i++){
		scanf("%lf %lf", &h, &w);
		data[i][0] = h;
		data[i][1] = w;
		data[i][2] = w / (h * h);
	}

	for (i = 0; i < 5; i++){
		printf("%.2f %.2f %.2f", data[i][0], data[i][1], data[i][2]);

		if (data[i][2] > 22){
			printf(" +\n");
		}
		else {
			printf("\n");
		}
	}
	return 0;
}