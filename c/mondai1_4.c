#include <stdio.h>


int main()
{
	int a, b;
	char c;

	a = 0;
	b = 0;


	while((c = getchar()) != EOF){

		

		if(c == 'a' || c == 'i' || c == 'u' || c == 'e' || c == 'o' || c == 'A' || c == 'I' || c == 'U' || c == 'E'  || c == 'O'){

			a++;

		} else {
			

			b++;

		}

	}
	
	
	printf("vowel = %d  ,  other = %d \n", a, b );
	
	return 0;
}