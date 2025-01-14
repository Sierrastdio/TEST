//끼얏호우 내가 나설 차례인가
#include <stdio.h>

int main()
{
	int i = 0;
	char *items[]={"Sword", "Shield", "Armor", "Boots", "Bow", "Arrow"};
	int price[] ={ 121, 135, 245, 574, 672, 457};
	
	int cursor = 5;
	
	int key = 0;
	int aa = 0;
	
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
		
		printf("Press a 'w' or 's'key to next, cursor (선택: o키) %d\n", cursor);
		scanf("%s", &key);
		
		if(key == 'w')
		{
			cursor--;
		}
		
		if(key == 's')
		{
			cursor++;
		}
		
			
		if(key == 'o')
		{	
			printf("해당 장비를 선택함\n");
			break;
		}
		
		if(cursor == -1)
		{
			cursor = 5;
		}
		
		if(cursor == 6)
		{
			cursor = 0;
		}
		
	}
	while(1)
	{
		printf("다음으로 넘어가기(n)\n");
		scanf("%s", &aa);
	
		if(aa == 'n')
		{
			break;
		}
	
		if(aa != 'n')
			printf("잘못된 키를 눌렀습니다. 한번에 많은수의 글자를 입력하면 에러남 ㅅㄱ\n");
	}
	while(1)
	{
		printf("\n");
		printf("\n");
		printf("당신은 본인이 산 장비를 들고 몬스터한테 나대다가 뒤졌습니다 ㅅㄱ\n");
		scanf("%s", &aa);
		
		if(aa == '`')
		{
			printf("히든 키를 발견하였습니다! 기적적으로 살아나 몬스터를 다 처치했습니다.\n");
			printf("<<<<해피엔딩>>>>\n");
			break;
		}
		
		if(aa != '`')
		{
			printf("\n");
			printf("\n");
			printf("\n");
			printf("사실 몬스터를 전부 처치할수 있는 마법을 발동하는 히든키가 있었는데 그걸 못찾누ㅋ\n");
			printf("<<<<결국 유일한 용사인 당신이 뒤져버려서 이 세상은 라이넬이 지배하게 되는\n");
			printf("그런 더럽고 추악하고 사악하고 추하고 굴욕적이고 이해할수 없고 말이안되고 개똥같은\n");
			printf("세상이 되어버렸습니다.>>>>\n");
			printf("환생할 기회드림. 기회 계속주는 이유는 어차피 못 찾을 거니까ㅋ\n"); 
		
		}
		else;
	}
	
}