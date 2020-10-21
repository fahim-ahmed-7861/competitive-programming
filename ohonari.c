#include<stdio.h>
int main()
{
    int t,s;

    scanf("%d",&s);

    for(t=1; t<=s; t++)
    {

    int num=0,m,k,i=0,res,n,binary[100],count=0,p;

    scanf("%d",&n);

    m=n;


    while(n>0)
    {
        res=n%2;
        n=n/2;
        binary[i]=res;
        i++;
    }
    for(i=i-1; i>=0; i--)
    {
        if(binary[i]==1)count++;
    }
    for(p=m+1; p>m; p++)
    {
        num=0;
         i=0;
        k=p;
        while(k>0)
       {
        res=k%2;
        k=k/2;
        binary[i]=res;
        i++;
       }
        for(i=i-1; i>=0; i--)
       {
        if(binary[i]==1)num++;
       }
       if(num==count)
       {
           printf("Case %d: %d\n",t,p);
           break;
       }
    }
    }

    return 0;
}

