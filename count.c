#include <stdio.h>

int main(void)
{
	int i=0;
	int numbers[]={230, 245, 237, 252, 232, 230, 232, 230};
	int count=0;
	
	for(i=0; i<8; i++)
	{
		printf("%d : %d\n", i, numbers[i]);
		
		if(numbers[i] == 252)
		{
			count = count +1;	// count++
		}
	}
	printf("count : %d개\n", count);
}