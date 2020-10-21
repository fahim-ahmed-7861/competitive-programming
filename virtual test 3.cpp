#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,int>pp;
#define sf(a) scanf("%d",&a)
#define ischar(x)  (('a' <= x && x <= 'z') || ('A' <= x && x <= 'Z'))
//#define fastread() (ios_base::sync_with_stdio(false),cin.tie(NULL));

#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));

int main()
{
    int a,b,s=0;

    cin>>a>>b;

    int m = sqrt(b);
   for (int f = 1; f <= m; f++)
      s += f * (b/f - ((a-1)/f));

      cout<<s<<endl;
}



