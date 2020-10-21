#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,sum;

    while(scanf("%d %d",&n,&m)==2)
    {
        if(n==0 && m==0)break;

        sum=m-n;


        if(sum>187 || sum==2
        || sum==100 || sum==50 || sum==5
        ||sum==10 || sum==20)
        {
            printf("impossible\n");
        }
        else{
        if(sum>=100)sum=sum-100;


        if(sum>=50)sum=sum-50;
        if(sum>=20)sum=sum-20;
        if(sum>=10)sum=sum-10;
        if(sum>=5)sum=sum-5;
            if(sum>=2)sum=sum-2;

        if(sum==0)printf("possible\n");

        else printf("impossible\n");
        }

    }
    return 0;
}

