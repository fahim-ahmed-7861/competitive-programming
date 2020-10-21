#include <stdio.h>

int main() {

	int N,X,Y,j,i,saida;

	scanf("%d",&N);
	for(i = 0; i< N; i++){
		saida = 0;
            scanf("%d %d",&X,&Y);

		if (X%2==0)
			X+=1;
		for(j = 0; j <Y;j++){
			saida+=X + 2*j;
		}

		printf("%d\n",saida);
	}
    return 0;
}
