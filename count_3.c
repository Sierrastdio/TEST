#include <stdio.h>
#include <string.h>

int main(void)
{
	int i = 0;
	int numbers[]={ 100, 101, 102, 103, 104 };
	int pool[]= { 0, 0, 0, 0, 0};
	
	#if 0
	pool[0] = numbers[4];
	pool[1] = numbers[3];
	pool[2] = numbers[2];
	pool[3] = numbers[1];
	pool[4] = numbers[0];
	#endif
	
	for(i=0; i<5; i++)
	{
		pool[i] = numbers[4-i];
		printf("%d : %d	-> %d\n", i, numbers[i], pool[i]);
	}
}