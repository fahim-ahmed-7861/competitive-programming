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

    string str;
    getline(cin,str);

    int n=str.size(),B,u,l,b,a,s,r,i;

    B=u=l=b=a=s=r=0;

    for(i=0; i<n; i++)
    {
        switch(str[i])
        {
            case 'B' : B++;
                       break;

            case 'u' : u++;
                        break;

            case 'l' : l++;
                       break;
            case 'b' : b++;
                        break;

           case 'a' : a++;
                    break;
            case 's' : s++;
                    break;

         case 'r' : r++;
                    break;
        }
    }

     u/=2;

    b/=2;

    a/=2;

    if(a<1 || b<1 || B<1 || u<1 || r<1 || s<1 || l<1)
    {
        cout<<0<<endl;
    }

    else
    {
        int minimum=min(a,min(b,min(B,min(u,min(s,min(r,l))))));

        cout<<minimum<<endl;
    }
}

