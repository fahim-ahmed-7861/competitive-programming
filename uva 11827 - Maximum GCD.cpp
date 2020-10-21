#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,int>pp;
#define ischar(x)  (('a' <= x && x <= 'z') || ('A' <= x && x <= 'Z'))
#define fastread() (ios_base::sync_with_stdio(false),cin.tie(NULL));
int main()
{
    fastread();

    int t,n,ara[99],ans,i;
	string str;

	cin>>t;
	cin.ignore();

	while(t--){
		getline(cin,str);


		istringstream is(str);
		i = 0;

		while(is>>ara[i]) ++i;

     n=i;
		int sum = 0;
		int m=0,j;

		sort(ara,ara+n);

		for(i=n-1; i>=1; i--)
        {
            for(j=i-1; j>=0; j--)
            {
                sum=__gcd(ara[i],ara[j]);

                if(m<sum)
                {
                    m=sum;

                    if(m==ara[j])break;
                }
            }
            if(m==ara[j])break;
        }

        printf("%d\n",m);
	}
}


