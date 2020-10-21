#include<bits/stdc++.h>
using namespace std;
#define fast() (ios_base:: sync_with_stdio(false),cin.tie(NULL));

#define out  freopen("output.txt", "w", stdout)
const int Mod = 1e9 + 7;
long long pw(long long x, long long y)
{
    if (y == 0)
        return 1;
    else if (y%2 == 0)
        return (pw(x, y/2)%Mod)* (pw(x, y/2)%Mod);
    else
        return ((x%Mod) * (pw(x, y/2)%Mod) * (pw(x, y/2)%Mod))%Mod;
}
long long value(string str)
{
    long long i,sz,sum=0,j,cnt,m;

    reverse(str.begin(),str.end());

    sz=str.size();

    str=str+".";

    for(i=0; i<sz; i++)
    {
         j=i;

        while(i<sz && str[i]==str[i+1]) i++;

        m=str[j]-'0';

        cnt=i;

        sum=(sum+(m*pw(10,cnt)%Mod)%Mod)%Mod;

    }

    return sum;

}
int main()
{
    out;
     fast();
    long long i,sz,t,s,n1,n2,l,r,j,hs;


    l=1;
    long long pre=0;

    for(r=1; r<=12000; r++){
        s=0;

        string str;

        for(j=l; j<=r; j++)
        {
            str=to_string(j);

            sz=str.size();

           s=(s+value(str))%Mod;

        }

        long long ans=r*(r+1);

        ans/=2;

        cout<<r<<" "<<s%Mod<<" "<<(s%Mod)-pre<<" "<<ans-s<<endl;

        pre=s%Mod;
    }

   return 0;

}


