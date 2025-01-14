#include <stdio.h>

int num[]={0,1,2,3,4,5,6,7, 100};

int main()
{
	int k=0;
	
	while(num[k] != 100)
	{
		printf("%d\n", num[k]);
	
		if(k == 3)
		{
			break;
		}
		
		k++;		
	}
	printf("끝\n");
}
