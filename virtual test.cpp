#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,int>pp;
#define sf(a) scanf("%d",&a)
#define pf(a) printf("%d\n",a)
#define mp make_pair
#define pb push_back
#define ischar(x)  (('a' <= x && x <= 'z') || ('A' <= x && x <= 'Z'))
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));

int main()
{
    fastread();


    int n,i,j;

    bool c=true;

    cin>>n;

    char str[n+1][n+1];

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            cin>>str[i][j];
        }
    }

    char ch=str[0][0],kh=str[0][1];

    if(ch==kh || n==1)
        goto xx;

    for(i=0; i<n; i++)
    {
        if(str[i][i]!=ch)
            c=false;
    }
    if(c)
    {
        for(i=0,j=n-1; j>=0; i++,j--)
        {
            if(str[i][j]!=ch)
            {
                c=false;
                goto xx;
            }
        }
        if(c)
        {
            for(i=0; i<n; i++)
            {
                for(j=0; j<n; j++)
                {
                    if(i!=j && i+j!=n-1 && str[i][j]!=kh)
                    {
                        c==false;
                        goto xx;
                    }


                }

            }
            if(c)
                cout<<"YES\n";

            else
                goto xx;
        }
        else
            goto xx;
    }
    else
xx:
        cout<<"NO\n";
}
