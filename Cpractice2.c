#include <stdio.h>

int main(int argc, char const *argv[])
{
	int i;
	int mokuhyou,chokin,goukei,kikan;
	int year,month;

	goukei = 0;
	kikan = 0;

	printf("目標金額(円) = ");
	scanf("%d", &mokuhyou);

	printf("月々の貯金(円) = ");
	scanf("%d", &chokin);
	while(mokuhyou > goukei){

		goukei += chokin;
		
		kikan++; 
	}

	year = kikan / 12;

	month = kikan % 12;

	printf("%d年　%dヶ月です。", year, month);


	return 0;
}