#include<stdio.h> //배열은 같은 자료형이 연속적으로 구성된 자료 구조를 의미한다.

int main(void)
{
	int i;
	float aa [4]; //aa[0]부터 시작해서 aa[4]까지의 총 5개의 변수가 선언되었다는 뜻이다.
	float xx;
	float yy;
	
	printf("첫번째 수를 입력하시오\n");
	scanf("%f", &xx);
	
	printf("두번째 수를 입력하시오\n");
	scanf("%f", &yy);
	
	aa[0] = xx + yy; //입력받은 xx와 yy의 값으로 연산을 수행하도록 각 배열변수에 연산 내용을 지정한다.
	aa[1] = xx - yy;
	aa[2] = xx * yy;
	aa[3] = xx / yy;
	
	for(i = 0; i<4; i++)
	{
		printf("%f\n", aa[i]);
	}
	
}
	