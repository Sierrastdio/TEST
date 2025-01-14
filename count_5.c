#include <stdio.h>

int main(void)
{
	int i = 0;
	int k = 0;
	
	int xx=16;
	int yy=16;
	
	printf("unsigned char data[]={\n");
	
	for(k=0; k<yy; k++)
	{	
		for(i=0; i<xx; i++)
		{
			printf("%3d,", (k*xx)+i);
		}
		printf("\n");
	}
	printf("};\n");
}