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
#define MAX 1000000
int failure[MAX+1];

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

int kmp(string text, string pattern)
{
    int n,m,i=0,j=0;

    n=text.size();
    m=pattern.size();

    failure_func(pattern,m);

    while(true)
    {
        if(j==n)
            return i;

        if(text[j]==pattern[i])
        {
            i++;
            j++;
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


    return i;
}

int main()
{
    int n,s=0,m;
    string t,p;

    while(cin>>p)
    {
        s++;

    t=p;

    n=t.size();

    reverse(p.begin(),p.end());
     m=kmp(t,p);

     string sub=t.substr(0,n-m);

     reverse(sub.begin(),sub.end());

     t+=sub;

     cout<<t<<endl;
    }

}
