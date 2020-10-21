#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,int>pp;
#define sf(a) scanf("%d",&a)
#define pf(a) printf("%d\n",a)
#define mp make_pair
#define pb push_back
#define pp pop_back
#define ischar(x)  (('a' <= x && x <= 'z') || ('A' <= x && x <= 'Z'))
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));

#define mod 1000000007;

int main()
{
    string str;

    cin>>str;

    int n=str.size(),pos;

    int cnt=0,i;

    for(i=0; i<n; i++)
    {
        pos=str.substr(i).find("bear");

        if(pos==-1)break;

        else
            cnt+=1+str.substr(i).size()-pos-4;
    }
    cout<<cnt<<endl;
}
