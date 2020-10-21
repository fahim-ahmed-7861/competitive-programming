#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,int>pp;
#define ischar(x) (('a'<=x && x<='z') || ('A'<=x && x<='Z'))
#define fastread() (ios_base::sync_with_stdio(false),cin.tie(NULL));
int main()
{
    fastread();

    int t,n,i,j,k,sum,temp,c;
    scanf("%d",&t);

    while(t--)
    {
        c=0;
        cin>>n;

        int ara[n+2];

        for(i=0; i<n; i++)cin>>ara[i];

        sort(ara,ara+n);


        for(i=0,j=0; i<n-1; i++)
        {
            sum=ara[i]*2;

            j=0;
            k=i+1;
              cout<<i<<" "<<j<<" "<<k<<endl;
            while(j<=i && k<n)
            {
                temp=ara[j]+ara[k];

                cout<<sum<<" "<<temp<<endl;

                if(temp==sum && j!=k)c++;

                if(temp>sum)
                {
                    j++;
                    k=i+1;
                }
                else k++;

                if(k==n)
                {
                    j++;
                    k=i+1;
                }
                    cout<<i<<" "<<j<<" "<<k<<endl;
            }
           // if(k==n)j--;//cout<<endl<<endl;
        }

        cout<<c<<endl;
    }
}
/*

1
6
4 2 5 1 3 5
*/
