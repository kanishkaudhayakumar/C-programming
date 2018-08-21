#include<stdio.h>
int main()
{
    int n,a, o=0, r, sum=0,i;

    scanf("%d",&a);
    scanf("%d", &n);
    for(i=n+1;i<a;i++)
    {		
		i=a;
		i=n;
   	
    		while (a!= 0)
    		{
        		 a=a/10;
			o++;
   		 }
		while(n!=0)
		{
			r=n%10;
			sum+=r*r*r;
			n=n/10;
		}
  	 
   }

    if(sum== i)
        printf("%d",i);
    else
        printf("%d",i);
    return 0;
}

