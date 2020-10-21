#include <stdio.h>
#include <string.h>
#define MAX 100

int main() {
	int n,p,q,a;
	char str[MAX];
	scanf("%d %d %d",&n,&p,&q);
	scanf("%s",str);
	int i,j,count=0;
	for (i = 0 ; i <= MAX ; i++)
	{
		for (j = 0 ; j <= MAX ;j++)
		{
			if ( ((p*i) + (q*j)) == n )
			{
				count = 1;
				break;
			}
		}
		if( count == 1 )
			break;
	}
	if(count == 0)
		printf("-1\n");
	else
	{
		printf("%d\n",(i+j));
		int k = 0;
		while(i--)
		{
			for(a=0;a<p;a++)
			{
				printf("%c",str[k]);
				k++;
			}
			printf("\n");
		}
		while(j--)
		{
			for(a=0;a<q;a++)
			{
				printf("%c",str[k]);
				k++;
			}
			printf("\n");
		}
	}
	return 0;
}
