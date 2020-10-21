#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,i,k,o,num,j,sum,p=0;

    scanf("%lld",&n);

    long long ara[n+6],cra[n+10];

    for(i=0; i<n; i++)scanf("%lld",&ara[i]);


    for(i=0,k=0; i<n-1; i++)
    {
        num=-1;
        for(j=i+1; j<n; j++)
        {
            sum=abs(ara[j]-ara[i]);

            if(sum>=num)
            {
                if(num==sum)p++;
                num=sum;
            }
        }
        cra[i]=num;

    }
    n--;

   sort(cra,cra+n);

   o=lower_bound(cra,cra+n,cra[n-1])-cra;


    cout<<cra[n-1]<<" "<<n-o+p<<endl;

    return 0;
}
