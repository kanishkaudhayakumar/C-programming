#include <stdio.h>

int main()
{
    int a[10],i,K,N,sum=0;
    scanf("%d%d",&K,&N);
    for(i=1;1<=K;i++)
    {
        printf("%d",a[i]);
    }
    for(i=0;i<=N;i++)
    {
        sum=sum+i;
    }
    printf("%d",sum);
}
