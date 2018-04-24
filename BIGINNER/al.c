#include<stdio.h>
int main()
{
	char n;
	scanf("%s",&n);
	if((n>='a' && n<='z')||(n>='A' && n<='Z'))
	{
		printf("Alphabet");
	}
	else
	{
		printf("Not");
	}
	return 0;
}
