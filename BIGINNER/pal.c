#include <stdio.h>
int main()
{
    int N, reversedInteger = 0, remainder, originalInteger;

   
    scanf("%d", &N);

    originalInteger = N;

    // reversed integer is stored in variable 
    while( N>=1000)
    {
        remainder = N%10;
        reversedInteger = reversedInteger*10 + remainder;
        N=N/10;
    }

    // palindrome if orignalInteger and reversedInteger are equal
    if (originalInteger == reversedInteger)
        printf(" yes", originalInteger);
    else
        printf(" no", originalInteger);
    
    return 0;
}
