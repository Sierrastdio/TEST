#include <stdio.h>

int main(void)
{
	int i=0;
	int feet[]={230, 245, 237, 252, 232};
	int totalsum = 0;
	int everage = 0;
	int count = 5;
	int min = 0;
	int max = 0;

	printf("Everrone's feet size\n");
	
	for(i = 0; i<count; i++)
	{
		printf("%d : %d\n", i, feet[i]);
	}
	
	printf("----------------------\n");
	for(i = 0; i<count; i++)
	{
		totalsum = totalsum + feet[i];
	}
	printf("totalsum : %d\n", totalsum);	
	printf("----------------------\n");
	
	everage = totalsum/count;
	printf("everage : %d\n", everage);
	printf("----------------------\n");
	min = feet[0];
	
	for(i = 0; i < count; i++)
	{
		if(min > feet[i])
		{
			min = feet[i];
		}
	}
	printf("min : %d\n", min);
	printf("----------------------\n");
	max = feet[0];
	
	for(i = 0; i < count; i++)
	{
		if(max < feet[i])
		{
			max = feet[i];
		}
	}
	printf("max : %d\n", max);

	return 0;
}