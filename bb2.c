#include <stdio.h>

int main()
{
	int aa;
	int bb; //공격력
	int cc; //공속
	char TS;

	printf("무기를 선택\n");
	printf("1. 검\n");
	printf("2. 도끼\n");
	printf("3. 창\n");
	printf("4. 철퇴\n");
	
	
	scanf("%d", &aa);
	
	
	if(aa == 1)
	{
		printf("검을 선택하셨습니다\n");
		bb = bb + 30;
		cc = cc + 20;
		
		printf("공격력 : %d\n", bb);
		printf("공격속도(높을수록 좋음) : %d\n", cc);
	}
	
	if(aa == 2)
	{
		printf("도끼를 선택하셨습니다\n");
		bb = bb + 60;
		cc = cc + 10;
		printf("공격력 : %d\n", bb);
		printf("공격속도(높을수록 좋음) : %d\n", cc);	
	}
	
	if(aa == 3)
	{
		printf("창을 선택하셨습니다\n");
		bb = bb + 28;
		cc = cc + 40;
		printf("공격력 : %d\n", bb);
		printf("공격속도(높을수록 좋음) : %d\n", cc);	
	}
	
	if(aa == 4)
	{
		printf("철퇴를 선택하셨습니다\n");
		bb = bb + 9999999;
		cc = cc + 9999999;
		printf("공격력 : %d\n", bb);
		printf("공격속도(높을수록 좋음) : %d\n", cc);
	}
	
	
	return 0;
}

	
