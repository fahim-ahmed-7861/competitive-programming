#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll,ll>pll;
typedef pair<ll,pair<ll,ll>>plll;
//#define sf(a) scanf("%I64d",&a)#define F first
#define S second
#define minheap int,vector<int>,greater<int>
#define mp make_pair
#define pb push_back
#define pp pop_back
#define BOUNDARY(i, j) ((i >= 0 && i < row) && (j >= 0 && j < column))
#define ischar(x)  (('a' <= x && x <= 'z') || ('A' <= x && x <= 'Z'))
#define isvowel(ch) ((ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')||(ch=='A'|| ch=='E' || ch=='I'|| ch=='O'|| ch=='U'))
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
const int Max = 2e6 + 10;
const int Mod = 1e9 + 7;
//___________________________________________________________________________________________________________________
//                              CODE STARTS FROM HERE
//-------------------------------------------------------------------------------------------------------------------


int main()
{
   fastread();

   ll i,j,n,m,k;


   string str;

   cin>>m;

   while(m--)
   {


       cin>>n;

       cin>>str;

      i=0;
      j=n-1;
      int cnt=0;

      while(i<j)
      {
          if(str[i]!=str[j])
          {
              int sum=abs(str[i]-str[j]);

              if(sum!=2)
              {
                  cout<<"NO"<<endl;
                  cnt=1;
                  break;
              }
          }
          i++;
          j--;
      }

      if(cnt==0)cout<<"YES"<<endl;



   }




}
