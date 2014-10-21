#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	int i;
	char name[20], maxname[20];
	size_t len, max_len;
	max_len = 0;
	for (i = 0; i < 5; i++)
	{
		scanf("%s", name);
		len = strlen(name);
		if(len > max_len)
		{
			strcpy(maxname, name);
			max_len = strlen(maxname);
		}
	}
	printf("The longest name is %s\n", maxname);
	return 0;
}
