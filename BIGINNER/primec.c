#include <stdio.h>
int main()
{
    int N, i, flag = 0;

 
    scanf("%d",&N);
	if(N<=1000)
	{
  	  	for(i=2; i<=N/2; ++i)
    		{

       			 if(N%i==0)
       			 {
            flag=1;
            break;
        }
    }
}

    if (flag==0)
        printf("yes");
    else
        printf("no");
    
    return 0;
}
