#include<stdio.h>
int main()
{
    int n,m,p,i,c=0,sum;

    scanf("%d %d",&n,&m);

    for(i=0; i<n; i++)
    {
        scanf("%d",&p);

        if(m%p==0)
        {
            sum=m/p;

            if(sum<c|| c==0)
            {
                c=sum;
            }
        }
    }
    printf("%d\n",sum);

    return 0;
}
