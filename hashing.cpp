#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,int>pp;
#define sf(a) scanf("%d",&a)
#define pf(a) printf("%d\n",a)
#define mp make_pair
#define pb push_back
#define p pop_back
#define ischar(x)  (('a' <= x && x <= 'z') || ('A' <= x && x <= 'Z'))
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define mod 1000000007;
#define MAX 100000
int failure[MAX];

void failure_func(string pattern,int m)
{
    ll i,j;

    failure[0]=0;
    failure[1]=0;

    for(i=2; i<=m; i++)
    {
        j=failure[i-1];

        while(true)
        {
            if(pattern[j]==pattern[i-1])
            {
                failure[i]=j+1;
                break;
            }

            if(j==0)
            {
                failure[i]=0;
                break;
            }

            j=failure[j];
        }
    }
}

bool kmp(string text, string pattern)
{
    int n,m,i=0,j=0;

    n=text.size();
    m=pattern.size();

    failure_func(pattern,m);

    while(true)
    {
        if(j==n)
            return false;

        if(text[j]==pattern[i])
        {
            i++;
            j++;

            if(i==m)
                {
                    cout<<j-m<<endl;
                    return true;
                }
        }
        else
        {

            if(i==0)
            {
                j++;
            }
            else
                i=failure[i];
        }
    }

    return false;
}

int main()
{

    string t,p;

    cin>>t;

    p=t;

    reverse(p.begin(),p.end());



   cout<<kmp(t,p)<<endl;

   cout<<failure[p.size()]<<endl;

}
