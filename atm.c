#include<stdio.h>
int main()
{
    int x;
    float y,k;

    scanf("%d %f",&x,&y);

    if(y>x+.5 && x%5==0)
    {
        k=y-x-0.50;

        printf("%.2f\n",k);
    }

    else printf("%.2f\n",y);

    return 0;
}
