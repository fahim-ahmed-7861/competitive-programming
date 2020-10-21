#include<stdio.h>
int main()
{
    int i,n,p,T,j=1;
    scanf("%d",&T);

    while(T--)
    { p=0;
    scanf("%d",&n);
    int ara[n];

    for(i=0;i<n;i++){
        scanf("%d",&ara[i]);}

        printf("Set %d: ",j);
        for(i=0;i<n;i=i+2)
        {

        printf("%d  ",ara[i]);
        }
        printf("\n");
        j++;
    }
    return 0;
}
