#include <stdio.h>
#include <string.h>

char *messages_1[]={
	"화살",	//0
	"칼",		//1
	"갑옷",	//2
	"말",		//3
	"투구",	//4
	"장화",	//5
};

int main()
{
	int k=0;
	int m=0;
	int n=0;
	
	char **msg;
	
	msg = messages_1;
		
	while(msg[k] != NULL)
	{
		printf("%d %s\n", k, msg[k]);
		
		if(strcmp("화살", msg[k]) == 0)
		{
			m = k;
		}
		
		if(strcmp("장화", msg[k]) == 0)
		{
			n = k;
		}
		
		k++;
	}
	printf("찾았어요 %s %d 번쨰\n", msg[m], m);
	printf("찾았어요 %s %d 번쨰\n", msg[n], n);
	printf("종료\n");
}
