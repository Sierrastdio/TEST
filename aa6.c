#include <stdio.h>

char *messages_1[]={
	"0 :  안녕하세요",
	"1 :  거기도 안녕하세요",
	NULL,
	"2 :  물건을 사시겠어요?",
	"3 :  아니요, 안사요",
	"4 :  후회 할텐데..",
	NULL,
	"5 :  여긴 시험..",
	"6 :  여긴 시험..",
	"7 :  여긴 시험..",
	"8 :  여긴 시험..",
	};

int main()
{
	int k=0;
	
	char **msg;
	
	msg = messages_1;
	
	while(msg[k] != NULL)
	{
		printf("%s\n", msg[k]);
		k++;
	}
	printf("끝\n");
}


	
		
		