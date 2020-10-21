#include<stdio.h>
int main()
{
    int t,s;
    scanf("%d",&s);
    for(t=1; t<=s; t++)
    {
        int a,i=0,b[1000],s,ara[1000],h,count=0,k,j;
        scanf("%d",&a);

        if(a<10 && a>=0)
        {
            printf("Case %d: Yes\n",t);
            continue;
        }

        while(a>0)
        {
            b[i]=a%10;
            a/=10;
            i++;
        }

        for(h=i-1,j=0; h>=0; h--,j++)
        {
            ara[j]=b[h];

        }


        for(s=0,i=0; s<=j; i++,s++)
        {
            if(ara[s]==b[i])count++;

            else break;
        }
        //printf("%d\n",count);
        if(count==j) printf("Case %d: Yes\n",t);

        else printf("Case %d: No\n",t);
    }

    return 0;

}
