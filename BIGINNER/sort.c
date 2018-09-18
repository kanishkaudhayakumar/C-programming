#include <stdio.h>
 
int main()
{
	int Array[50], i, j, temp, Size;
	scanf("%d", &Size);
	for (i = 0; i < Size; i++)
	{
		scanf("%d", &Array[i]);
    }     
	for (i = 0; i < Size; i++)
	{
		for (j = i + 1; j < Size; j++)
		{
			if(Array[i] > Array[j])
			{
				temp = Array[i];
				Array[i] = Array[j];
				Array[j] = temp;
			}
			
		}
	}
	for (i = 0; i < Size; i++)
	{
		printf("%d", Array[i]);
	}
	
	return 0;
}
