#include<stdio.h>
int main()
{
    int i=1,n,s;

    scanf("%d",&n);

    s=0;

    do
    {
        s=s+i;

        printf("%d\n",i);

        i=i+3;
    }while(i<n);

    printf("done\n");
   // printf("DONE!\n");

}
