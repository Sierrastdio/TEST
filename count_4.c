#include <stdio.h>

int main(void)
{
	int i = 0;
	int numbers[]={0, 1, 2,3,4};
	int bucket[sizeof(numbers)/sizeof(int)];
	
	int num_count=0;


	for(i=0; i<sizeof(bucket)/sizeof(int); i++)
	{
		bucket[i] =0;
		printf("%d : %d\n", i, bucket[i]);
	}
	return 0;
	
	num_count = sizeof(numbers)/sizeof(int);
	
	printf("num_count = %d\n", num_count);
	
	for(i=0; i<num_count; i++)
	{
		bucket[i] = numbers[(num_count-1)-i];
		//bucket[i] = numbers[i];
		
		printf("%d : %d \n", i, bucket[i]);
	}
}
