#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod =1e9+7;

long long  power(int n, int b)
{
      if(b==0)return 1;

      else if(b%2==0)
      {
           ll pw=power(n,b/2);

           return pw*pw;
      }

      else
      {
          return power(n,b-1)*n;
      }
}
int main()
{
    int t;
    scanf("%d",&t);
    int cas=1;
    cin.ignore();
    while(t--)
    {
        string s,sub;
        char x,y;
        getline(cin,s);
        int len=s.size(),i,j;
        ll res=1,l,cnt=0;
        if(s[0]=='W')

        {
            cnt++;
            for(i=1;i<len;i++)
            {
                if(s[i]!='W')break;
            }
            if(i==len)res=((power(2,len))%mod+(power(2,len)/2)%mod)%mod;
            else
            {
                res=(max(res,power(2,i)%mod))%mod;
                x=s[i];
                //cout<<res<<endl;
                for(i;i<len;i++)
                {
                    if(s[i]!='W')x=s[i];
                    if(s[i]=='W')
                    {
                        sub.push_back(s[i]);
                        cnt++;
                        if(i+1==len)
                        {
                            l=sub.size();
                            res=(max(res,(power(2,l))%mod))%mod;
                        }
                        else if(s[i+1]!='W')
                        {
                            y=s[i+1];
                            l=sub.size();
                            if(x==y)
                            {
                                if(l==1)res=(max(res,(ll)2))%mod;
                                else res=(max(res,(power(2,l))%mod-2))%mod;
                            }
                            else res=(max(res,(power(2,l))%mod-4))%mod;
                            //cout<<((power(2,l))%mod-(power(2,l)/2)%mod)%mod<<endl;
                        }
                    }
                }
            }
        }
        else
        {
            //res=pow(2,len);
                for(i=0;i<len;i++)
                {
                    if(s[i]!='W')x=s[i];
                    if(s[i]=='W')
                    {
                        sub.push_back(s[i]);
                        cnt++;
                        if(i+1==len)
                        {
                            l=sub.size();
                            res=(max(res,(power(2,l))%mod))%mod;
                        }
                        else if(s[i+1]!='W')
                        {
                            y=s[i+1];
                            int l=sub.size();
                            if(x==y)
                            {
                                if(l==1)res=(max(res,(ll)2))%mod;
                                else res=(max(res,(power(2,l))%mod-2))%mod;
                            }

                            else res=(max(res,(power(2,l))%mod-4))%mod;
                            //res=(max(res,(power(2,l))%mod-2))%mod;
                            //cout<<res<<endl;
                        }
                    }
                }
        }
        if(cnt>0)printf("Case %d: %lld\n",cas++,res);
        else printf("Case %d: 0\n",cas++);
    }
    return 0;
}
