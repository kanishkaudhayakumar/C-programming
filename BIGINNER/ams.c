#include<stdio.h>
int main()
{
    int n, o, r, sum=0;

 
    scanf("%d", &n);

    o= n;
   if(n<10000)
   {
    	while (o!= 0)
    	{
        	r= o%10;
       		 sum+= r*r*r;
       		 o=o/ 10;
   	 }
   }

    if(sum== n)
        printf("yes");
    else
        printf("no");

    return 0;
}

