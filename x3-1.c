#include<stdio.h> 

int main(void)
{
	int *p, num, val, total;
	
	p = &num;	//num의 값을 포인터 p에 저장
	num = 100;	// num의 값 저장
	val = 200;
	
	int i = 0;
	
	for(i = 0; i<4; i++)
	{
		int k = i*2 + 1;
		printf("%d. %d\n",k , *p);
	
		
		total = *p + val;
		printf("%d. 200+%d = %d\n",k+1 , *p, total);
		*p = total;
	}
}