#include<stdio.h>	/*getchar와 putchar.
					getchar는 키보드로 부터 문자 한개를 입력시키는 표준함수로서 이용된다. 
					putchar는 는 인수를 지정하고 인수의 문자값에 해당하는 문자를 화면에 출력한다.
*/
int main(void)
{
	char c;
	
	c = getchar();	//키보드로부터 입력된 문자를 변수 c에 저장.
	putchar(c);		//변수c의 문자 한개를 화면에 출력.
}
/*실행화면에 숫자를 입력해도 에러가 나지 않는이유는 컴퓨터는 숫자든 문자든 모두 문자로 처리되기 때문.*/