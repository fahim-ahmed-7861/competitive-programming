#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll,ll>pll;
typedef pair<ll,pair<ll,ll>>plll;
#define sf(a) scanf("%I64d",&a)
#define pf(a) printf("%I64d\n",a)
#define mp make_pair
#define pb push_back
#define pp pop_back
#define BOUNDARY(i, j) ((i >= 0 && i < row) && (j >= 0 && j < column))
#define ischar(x)  (('a' <= x && x <= 'z') || ('A' <= x && x <= 'Z'))
#define isvowel(ch) ((ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')||(ch=='A'|| ch=='E' || ch=='I'|| ch=='O'|| ch=='U'))
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));

//___________________________________________________________________________________________________________________
//                              CODE STARTS FROM HERE
//-------------------------------------------------------------------------------------------------------------------


int main()
{
    fastread();

    ull i,j,n,m,k,sum,r,q,p;



    cin>>n>>q;

    if(n%2==0)
    {

        while(q--)
        {
            cin>>i>>j;

            if((i+j)%2==0)
            {

                sum=(i)/2;

                r=i-1;

                p=(n/2)*r;

                cout<<p+((j+i)/2)-sum<<endl;
            }

            else
            {

                if(i%2==0)j++;

                else j--;

                sum=(i)/2;

                r=i-1;

                p=(n/2)*r;

                cout<<p+((j+i)/2)-sum+(n*n)/2<<endl;
            }
        }
    }

    else
    {
         while(q--)
        {
            cin>>i>>j;

            if((i+j)%2==0)
            {
               ull lm=i/2;

                sum=(i)/2;

                r=i-1;

                p=(n/2)*r;

                cout<<lm+p+((j+i)/2)-sum<<endl;
            }

            else
            {

              ull lm=(i+1)/2;

                if(i%2==0)j++;

                else j--;

                sum=(i)/2;

                r=i-1;

                p=(n/2)*r;

                cout<<lm+p+((j+i)/2)-sum+(n*n)/2<<endl;
            }
        }
    }



}
