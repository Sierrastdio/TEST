#include <stdio.h>

int main()
{
	char ss[] = "abcd";
	char *p = ss;
	int i;
	
	for(i = 0; i<= 3; i++)
		putchar(ss [i]);
	putchar('\n');
	for(i = 0; i <=3; i++)
		putchar(p [i]);
	putchar('\n');
}