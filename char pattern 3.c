#include<stdio.h>
int main()
{
    int i,j,n,s,p,o,k;
    scanf("%d",&n);

    p=n*2-1;
    s=p/2;
    s+=2;
    k=s;

    for(i=1; i<=n; i++)
    {o='A';
        for(j=1; j<=p; j++)
        {
            if(i+j<=s || i+j>=k)
            {
                printf("%c ",o);
                j<n? o++:o--;
            }
            else
            {
                printf("  ");
                if(j==n)o--;
            }
        }
        k+=2;
        printf("\n");
    }
}
