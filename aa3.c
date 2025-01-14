#include <stdio.h>

int main()
{
	int num [5] = {15, 36, 270, 69, 57};
	int i;
	
	for(i = 0; i < 5; i++)
		printf("%d ", num[i]);
	printf("\n");
	
	
	for(i = 0; i < 5; i++)
		printf("%d ", *(num + i));
	printf("\n");
}
