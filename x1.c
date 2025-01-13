#include<stdio.h> //scanf으로 입력을 받고 if를 이용한 조건문으로 특정 문구 출력

int main(void)
{
	int aa = 10;
	printf("Press the 10\n");
	scanf("%d", &aa);
	
	if(aa == 10)
		printf("good job\n");
}
