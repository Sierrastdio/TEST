#include <stdio.h>

int number[]={4, 7, 8, 9, 3};

char *messages_1[]={
	"0 :  안녕하세요",
	"1 :  거기도 안녕하세요",
	"2 :  물건을 사시겠어요?",
	"3 :  아니요, 안사요",
	"4 :  후회 할텐데.."
	};

char *messages_2[]={
	"0 :  괜찮아요?",
	"1 :  안 괜찮아요. 아파요",
	"2 :  어디가 아파요?",
	"3 :  무릎이 아니고, 머리요..",
	"4 :  음.. 답이 없네"
	};
	
char *messages_3[]={
	"0 :  누구세용?",
	"1 :  얼마예요?",
	"2 :  5만원이요",
	"3 :  날강도 자식",
	"4 :  꼬우면 니도 비싸게 파세요"
	};

int main()
{
	int i=0;
	int k=0;
	int num = 0;
	
	char **msg;
	
	msg = messages_1;

	for(i=0; i<10;)
	{
		printf("%d : ", i);
	
		scanf("%d", &num);
		
		if(num == 100)
		{
			i=0;
			continue;
		}
		else if(num == 1000)
		{
			msg = messages_1;
			printf("메시지 1\n");
			
			for(k=0; k<4; k++)
			{
				printf("%s\n", msg[k]);
			}
		}
		else if(num == 2000)
		{
			msg = messages_2;
			printf("메시지 2\n");
			
			for(k=0; k<4; k++)
			{
				printf("%s\n", msg[k]);
			}
		}
		else if(num == 3000)
		{
			msg = messages_3;
			printf("메시지 3\n");
			
			for(k=0; k<4; k++)
			{
				printf("%s\n", msg[k]);
			}
		}
		else if(num > 4)
		{
			printf("그거 아니야\n");
			continue;
		}  
		else
		{
			printf("아 그거 그렇게 하는거 아닌데\n");
			continue;
		}
		
		printf("%s\n", msg[num]);
		
		i++;
	}

	
	printf("종료\n");	
	return 0; 
}
