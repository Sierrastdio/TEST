#include <stdio.h>

int main(void)
{
	int i=0;
	int feet[]={230, 245, 237, 252, 232};
	int totalsum = 0;
	int everage = 0;
	int count = 5;

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
	
	return 0;
}