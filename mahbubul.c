#include<stdio.h>
int phi[100000],mark[100000];
void euler(int n)
{
    int i,j;

    for(i=1; i<=n; i++)phi[i]=i;

        phi[1]=1;
        mark[1]=1;
        for(i=2; i<=n; i++)
        {
            if(!mark[i])
            {
                for(j=i; j<=n; j+=i)
                {
                    mark[j]=1;
                    phi[j]=phi[j]/i*(i-1);
                }
            }
        }

}

int main()
{
    int i,n;
    scanf("%d",&n);

    euler(n);

    for(i=0; i<n; i++)
    {
        if(phi[i]!=1)printf("%d\n",phi[i]);
    }
}
