#include <stdio.h>

int main(void)
{
	int i=0;

	char *items[]={
		"Sword", 	// 0
		"Shield",	// 1
		"Armor",	// 2
		"Boots",	// 3
		"Bow",		// 4
		"Arrow"};	// 5
		
		for(i = 0; i < 6; i++)
		{
			
			if(i != 4)
			{
				printf("%d : %s\n", i, items[i]);
			}
		}	
	
}