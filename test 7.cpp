#include<bits/stdc++.h>
#define ll long long int
using namespace std;
map<string,int>mp;
const int Mod =  998244353;
void subString(string s, int n)
{

    for (int i = 0; i < n; i++)
        for (int len = 1; len <= n - i; len++)
            mp[s.substr(i, len)]++;
}


long long bigmod(long long b,long long p,long long m)
{
    if(p==0)return 1;

    if(p%2==1){
        long long part1=b%m;
        long long part2=bigmod(b,p-1,m);

        return (part1*part2)%m;
    }
    else if(p%2==0)
    {
        long long half=bigmod(b,p/2,m);

        return (half*half)%m;
    }
}


ll ModularMultiplicativeInverse(ll a,ll m)
{
    return bigmod(a,m-2,m);
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        mp.clear();
        string s;
        cin>>s;
        int arra[26];
        for(int i=0; i<=25; i++)
        {
            cin>>arra[i];
        }

        subString(s,s.length());
        ll tota=0;
        ll dx=0;
        for(auto x:mp)
        {
            string str=x.first;
            dx+=x.second;
            //cout<<str<<" ....................  "<<endl;
            string ptr="";
            ll sum2=0;

            for(int i=0; i<str.size(); i++)
            {

                ptr+=str[i];
                int k=0;
                bool flag=true;
                for(int j=i+1; j<str.size(); j++)
                {
                    if(ptr[k]!=str[j])
                    {
                        flag=false;
                        break;
                    }
                    else
                    {
                        k++;
                        if(k==ptr.size())
                        {
                            k=0;
                        }
                    }

                }
                if(flag==true)
                {
                    ll sum=0;
                    for(int x=0; x<ptr.size(); x++)
                    {
                        sum+=arra[ptr[x]-'a'];
                        //cout<<ptr<<" "<<sum<<endl;
                    }
                    sum2+=sum;






                }
            }
             tota+=(x.second*sum2);

        }
        cout<<(ModularMultiplicativeInverse(tota,Mod)*dx)%Mod<<endl;

    }


    return 0;
}
