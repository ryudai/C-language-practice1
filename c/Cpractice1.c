#include <stdio.h>

int main()
{
	int i;
	int gankin,ritu,kikan,goukei;
	
	printf("元金(円) = ");
	scanf("%d", &gankin);
	
	printf("率(%%)　= ");
	scanf("%d", &ritu);

	printf("期間(年)　= ");
	scanf("%d", &kikan);

	goukei = gankin;

	for ( i = 1; i < kikan; ++i) {
		
		goukei = goukei * (100 + ritu) / 100;
	}

	printf("元利合計 = %d\n", goukei);
	
	return 0;
}