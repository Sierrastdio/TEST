#include <stdio.h>

int main(void)
{
	int i=0;
	int feet[]={245, 237, 252, 230, 232};
	int totalsum = 0;
	int everage = 0;
	int count = 5;
	int min = 0;

	printf("Everrone's feet size\n");
	
	for(i = 0; i<count; i++)
	{
		printf("%d : %d\n", i, feet[i]);
	}
	
	printf("----------------------\n");
	
	for(i = 0; i<count; i++)
	{
		totalsum = totalsum + feet[i];
		printf("%d : %d\n", i, totalsum);
	}
	
	printf("----------------------\n");
	everage = totalsum/count;
	printf("%d\n", everage);

	printf("----------------------\n");	
	min = feet[0];
	for(i = 1; i < count; i++)
	{
		printf("%d : %d  %d\n", i, min, feet[i]);
		if(min > feet[i])
		{
			printf("%d : --> min %d %d\n", i, min , feet[i]);
			min = feet[i];
		}
	}
	
	printf("Smallest min : %d\n", min);
	
	return 0;
}