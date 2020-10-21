#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,int>pp;
#define ischar(x)  (('a' <= x && x <= 'z') || ('A' <= x && x <= 'Z'))
#define fastread() (ios_base::sync_with_stdio(false),cin.tie(NULL));

int main()
{
    fastread();

    string str,ktr;

    cin>>str;

    int n,i,j,k,num;

    str="00"+str;

    n=str.size();

    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            for(k=j+1; k<n; k++)
            {
              num=(str[i]-'0')*100;

              num+=(str[j]-'0')*10;

              num+=str[k]-'0';

             // cout<<num<<endl;

                if(num%8==0)
                {
                    cout<<"YES\n"<<num<<endl;

                    return 0;
                }

            }
        }
    }

    cout<<"NO\n";

}
