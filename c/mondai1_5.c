#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	char fname[20], sname[20], fullname[40];
	
	scanf("%s", fname);
	scanf("%s", sname);

	strcat(fname," ");
	strcpy(fullname, strcat(fname, sname));

	printf("%s\n",fullname);


	return 0;
}