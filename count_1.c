#include <stdio.h>

int main(void)
{
	int i=0;
	int numbers[]={230, 245, 237, 252, 232, 230, 232, 230};
	int match[8] ={-1, -1, -1, -1, -1, -1, -1, -1};
	int count = 0;
	
	for(i = 0; i < 8; i++)
	{
		
		printf("%d : %d", i, numbers[i]);
	
		if(numbers[i] == 230)
		{
			printf(" <--- count %d", count);
			match[count] = i;
			count++;
		}
		
		printf("\n");
	}
	printf("count : %d\n", count);
	
	printf("match : ");
	for(i = 0; i < 8; i++)
	{
		if(match[i] == -1)
			break;
		
		printf("%d ", match[i]);
	}
	printf("\n");
}
