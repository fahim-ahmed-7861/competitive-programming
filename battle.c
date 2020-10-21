#include<stdio.h>
int main()
{
    int n,a,i,lucky=0,unlucky=0;

    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        scanf("%d",&a);

        if(a%2==0)lucky++;

        else unlucky++;
    }
    if(lucky>unlucky) printf("READY FOR BATTLE\n");

    else printf("NOT READY\n");

    return 0;
}
