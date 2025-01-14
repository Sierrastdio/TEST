#include <stdio.h>

int main()
{
	int num[]= {0, 1, 2, 3, 4, 5, 6, 7, 8};
	int i = 0;
	
	for(i = 0; i < 9; i++)
	{
		if((num[i] == 0)||(num[i] == 1)||(num[i] == 2)||(num[i] == 3)||(num[i] == 4)||(num[i] == 5)||(num[i] == 6)||(num[i] == 7)||(num[i] == 8))
		{
			if(num[i] == 0)
				printf("%d T-34-76의 주포 관통력은 장식입니다\n", num[i]);
			
			if(num[i] == 1)
				printf("%d 높으신 분들은 그걸 몰라요\n", num[i]);
			
			if(num[i] == 2)
				printf("%d 남들 다 관통 140mm 때 혼자서 99mm인 소련보다는\n", num[i]);
			
			if(num[i] == 3)
				printf("%d 차라리 작약 조금더 적거나 더 많고 관통력도 높은 독일을 타고 말지.\n", num[i]);
			
			if(num[i] == 4)
				printf("%d (반대로 T-34-57은 작약량이 장식이다.)\n", num[i]);
			
			if(num[i] == 5)
				printf("%d 늬들 병팔오나 점보셔먼들은 티타임 티거만 보면 순간 뇌정지 오잖아?\n", num[i]);
			
			if(num[i] == 6)
				printf("%d 우리 티거나 판터들은 니들 보면 그냥 마우스 딸깍딸깍만 해도 킬이 들어오는데\n", num[i]);
			
			if(num[i] == 7)
				printf("%d ???: 니들 점보셔먼 정면 못뚫잖아!!\n", num[i]);
			
			if(num[i] == 8)
				printf("%d 니들도 점보셔먼끼리는 정면 못뚫는건 다 똑같쥬? 차라리 독일이 훨 낫지\n", num[i]);					
		}
		else
			printf("%d\n", num[i]);
	}
}

	
	
	