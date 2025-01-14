#include <stdio.h>

int main()
{
	int i = 0;
	char *items[]={"Sword", "Shield", "Armor", "Boots", "Bow", "Arrow"};
	int price[] ={ 121, 135, 245, 574, 672, 457};
	
	int cursor = 5;
	
	int key = 0;
	
	while(1)
	{
		for(i = 0; i < 6; i++)
		{
			if(i == cursor)
				printf("[\t%d : %s \t %d ]", i, items[i], price[i]);
			else
				printf("\t%d : %s \t %d", i, items[i], price[i]);
			
			printf("\n");
		}
		
		printf("Press a key to next, cursor %d\n", cursor);
		scanf("%s", &key);
		
		if(key == 'q')
		{
			cursor--;
		}
		
		if(key == 'a')
		{
			cursor++;
		}
		
		if(cursor == -1)
		{
			cursor = 5;
		}
		
		if(cursor == 6)
		{
			cursor= 0;
		}
		
		if(key == 'e')
		{
			break;
		}
	}
	printf("종료됨\n");
}