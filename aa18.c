#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int DCE(void);  //dice=DCE
main()
{
	int a; //c=a
	int b; //d=b
	int i1;
	int i2;
	
	char s1[80], s2[80];
	
	printf("\nlnput 1st Player's name : ");
	gets(s1);
	printf("\nlnput 2st player's name : ");
	gets(s2);
	
	i1 = i2 = 0;
	while(1) {
		printf("\n%S : press RETURN key to draw a dice.", s1);
		a = getchar();
		
		DCE = d();
		if(i1 < 100) {
			i1 += DCE;
			if(i1 == 100) {
				printf(" <%s> dice (%d)s ==> %d", s1, d, i1);
				printf("\n%s 승리.", s1);
				break;
			}
			else
				printf(" <%s> dice (%d) ==> %d", s1, d, i1);
		}
		else{
			i1 -= DCE;
			if(i1 == 100) {
				printf("\n%s 승리.", s1);
				break;
			}
			else
				printf(" <%s> dice (%d) ==> %d", s1, DCE, i1);
		}
		printf("\n%s : Press RETURN key to draw a dice.", s2);
		a = getchar();
		
		DCE = d();
		if(i2 < 100) {
			i2 += d;
			if(i2 == 100) {
				printf(" <%s> dice (%d) ==> %d", s2, d, i2);
				printf("\n%s 승리.", s1);
				break;
			}
			else
				printf(" <%s> dice (%d) ==> %d", s2, d, i2);
		}
		else {
			i2 -= d;
			if(i2 == 100) {
				printf("\n%s 승리.", s2);
				break;
			}
			else
				printf(" <%s> dice (%d) ==> %d", s2, d, i2);
		}
	}
}

int DCE(void)
{
	srand(time(NULL));
	return(rand() % 6 + 1);
}

			
	