#include<stdio.h>
#include<string.h>
int main()
{
    int T,n,z,i=0,k,p;
    char one[1000],two[1000];
    scanf("%d",&T);
    while(T--)
    {
        k=0;
        scanf("%d",&n);
        i++;

        if(n>=0 && n<=9)
        {
            printf("Case %d: Yes\n",i);
            continue;
        }

        while(n>0)
        {

            p=n%10;

            one[k]=p+48;
            n/=10;

            k++;
        }

        strcpy(two,one);
        strrev(two);
        z=strcmp(one,two);



        if(z==0)
        {
            printf("Case %d: Yes\n",i);
        }
        else
        {
            printf("Case %d: No\n",i);

        }

    }
    return 0;
}
