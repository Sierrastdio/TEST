#include <stdio.h>

int main()
{
	int num[] = {0, 1, 2, 3, 4, 5, 6, 7};
	int i;
	
	for(i = 0; i < 8; i++)
	{
		if((num[i] == 2) || (num[i] == 3) || (num[i] == 4))
		{
			if(num[i] == 2)
				printf("%d 안녕\n", num[i]);
			
			if(num[i] == 3)
				printf("%d 잘가\n", num[i]);
			
			if(num[i] == 4)
				printf("%d 가지마\n", num[i]);
		}
		else
		{
			printf("%d\n", num[i]);
		}
	}
}
	