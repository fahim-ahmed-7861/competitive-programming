#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);

    while(t--)
    {
        char ch;
        int n,i,ara[1000],m,g=0,k=0;
        scanf("%d",&n);
        m=n/2;
        ch=' ';

        for(i=0; ch==' '; i++)
        {
            scanf("%d%c",&ara[i],&ch);
        }
        if(ara[0]!=1 || n%2==0 || ara[1]-ara[0]!=1)

        {

            printf("no\n");

            continue;

        }

        for(i=0; i<n; i++)
        {
            if(m>=i)
            {
                if (ara[i+1]-ara[i]==1)k++;

            }
            else
            {
                if(ara[i-1]-ara[i]==1)g++;
            }
        }
        printf("%d %d\n",k,g);
        if(k==g+1)printf("yes\n");

        else printf("no\n");

    }
    return 0;
}
