#include <stdio.h>
int main()
{
    int N, reversedInteger = 0, remainder, originalInteger;

   
    scanf("%d", &N);

    originalInteger = N;

    
    while( N!=0)
    {
        remainder = N%10;
        reversedInteger = reversedInteger*10 + remainder;
        N=N/10;
    }


    if (originalInteger == reversedInteger)
        printf(" yes", originalInteger);
    else
        printf(" no", originalInteger);
    
    return 0;
}
