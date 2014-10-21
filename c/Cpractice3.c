#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	int i;
	int kensu, goukei, uriage;
	int uriage_t[20];
	double ritu;
	char tanto[10], tanto_t[20][10];	

	kensu = 0;
	goukei = 0;

	printf("担当者名が""end""で終了\n");

	printf("%d人目の担当者名: ", &kensu);
	scanf("%s", tanto);

	printf("%sさんの売り上げ = ", tanto);
	scanf("%d", &uriage);

	while(strcmp(tanto, "end")){

		uriage += goukei;
		kensu++;
		uriage_t[kensu] = uriage;

		strcpy(tanto_t[kensu],tanto);

		printf("%d人目の担当者名:　", &kensu);
		scanf("%s", tanto);

		if(strcmp(tanto, "end")){

			printf("%sさんの売り上げ = ", tanto);
			scanf("%d", &uriage);

		}

	}

	kensu++;
	uriage_t[kensu] = goukei;
	strcpy(tanto_t[kensu], "合計");

	printf("____________________________________\n");
	printf("   担当者\t\t売上\t比率　　\n");
	printf("------------------------------------\n");

	for (i = 1; i <= kensu; i++)
	{
		ritu = (double)uriage_t[i] * 100.0 / (double)goukei;

	printf("   %s%t%d            %d    \n", );		
	}
	return 0;
}