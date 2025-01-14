#include <stdio.h>

int main(void)
{
	int i=0;
	int feet[]={230, 245, 237, 252, 232};
	int count = 5;
	int totalsum=0;
	int everage=0;

	printf("Everrone's feet size\n");


	for(i=0; i<count; i++)
	{
		printf("%d : %d\n", i, feet[i]);
	}	

	printf("totalsum size\n");
	
	for(i=0; i<count; i++)
	{
		totalsum = totalsum + feet[i];
		printf("%d : %d\n", i, totalsum);
	}	
	
	printf("totalsum %d\n", totalsum);
	
	everage = totalsum/count;
	
	printf("Everage %d\n", everage);

	printf("%d / %d = %d\n", totalsum, count, everage);
		
	return 0;
}
