//
#include <stdio.h>

int main()
{
	int i = 0;
	char *items[]={"Sword", "Sheild", "Armor", "Boots", "Bow", "Arrow"};
	int price[]={121, 135, 245, 574, 672, 457};
	
	int csr = 5;
	
	int key = 0;
	//
	
	while(1)
	{
		for(i = 0; i< 6; i++)
		{
			if(i == csr)
				printf("[\t%d : %s \t %d ]", i, items[i], price[i]);
			else 
				printf("\t%d : %s \t %d", i, items[i], price[i]);
			
			printf("\n");
		}
		
		printf("Press a key to next cuesor (선택: O키) %d\n", csr);
		scanf("%s", &key);
		
		
		if(key == 'w')
		{
			csr--;
		}
		
		
		if(key == 's')
		{
			csr++;
		}
		
		if(key == 'o')
		{
			printf("해당 장비를 선택함\n");
			break;
		}
		
		if(csr == -1)
			csr == 5;
		
		if(csr == 6)
			csr == 0;
		
	}
	//while(1)
}

	