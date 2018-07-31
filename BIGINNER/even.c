#include<stdio.h>
int main()
{
	int a,b,i;
	scanf("%d",&a);
	scanf("%d",&b);
	for(i=a+1;i<b;i++)
	{
		if(i%2==0)
		{
			printf("%d\n",i);
		}
	}
}
