#include<stdio.h> //문자 갯수 세기 프로그램 다 못만듦.

int main(void)
{
	char c;
	int n = 0;
	
	c = getchar();
	
	while(c != 999999)	{
		n = n+1;
		c = getchar();
	}
	printf("%d\n", n);
}