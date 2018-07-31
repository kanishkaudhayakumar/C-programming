#include<stdio.h>
int main()
{
    int i,f=1,N;
   
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
    	f=f*i;
    }
    printf("%d",f);
return 0;
}
