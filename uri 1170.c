#include<stdio.h>
int main()
{
    int T,count;
    double x;
    scanf("%d",&T);

    while(T--)
    {
        count=0;
        scanf("%lf",&x);

        while(x>1)
        {
            x=x/2;
            count++;
        }
        printf("%d dias\n",count);
    }
    return 0;
}
