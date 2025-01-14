#include <stdio.h>

int main(void)
{
	int i=0;
	int feet[]={230, 245, 237, 252, 232, 225, 287};
	int totalsum = 0;
	int everage = 0;
	int count = 7;
	int min = 0;
	int min_pos = 0;
	int max = 0;
	int max_pos = 0;
	
	printf("얘네 발사이즈\n");
	
	for(i = 0; i < count; i++)
	{
		printf("%d : %d\n", i, feet[i]);
	}
	
	printf(" /////////////////////////////\n");
	
	for(i = 0; i < count; i++)
	{
		totalsum = totalsum + feet[i];
	}
	
	printf("totalsum : %d\n", totalsum);
	
	printf(" /////////////////////////////\n");
	
	everage = totalsum/count;
	
	printf("everage : %d\n", everage);
	
	printf(" /////////////////////////////\n");
	
	min = feet[0];
	
	for(i = 0; i < count; i++)
	{
		if(min > feet[i])
		{
			min = feet[i];
			min_pos = i;
		}
	}
	
	printf("%d. min :  %d\n", min_pos, feet[min_pos]);
	
	printf(" /////////////////////////////\n");
	
	max = feet[0];
	
	for(i = 0; i < count; i++)
	{
		if(max < feet[i])
		{
			max = feet[i];
			max_pos = i;
		}
	}
	
	printf("%d. max : %d\n", max_pos, max);
	
}