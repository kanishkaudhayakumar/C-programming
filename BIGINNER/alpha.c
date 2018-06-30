#include <stdio.h>

int main()
{
    char  ch;
    scanf("%s",&ch);
    if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
    {
        printf("Yes");
    }

    else
    {
        printf("No");
    }
    return 0;
}
