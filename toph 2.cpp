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
    fastread();

   int t;
   cin>>t;

   while(t--)
   {
       int a;

       string str;

       cin>>str;
       cin>>a;

       if(str=="F")
       {
          if(a<40)printf("Keep patience Captain.\n");

          else printf("Wow! It is a boundary.\n");
       }

       else if(str=="B")
       {
           if(a<80)printf("Keep patience Captain.\n");

          else printf("Wow! It is a boundary.\n");
       }
        else if(str=="L")
       {
           if(a<60)printf("Keep patience Captain.\n");

          else printf("Wow! It is a boundary.\n");
       }
        else if(str=="R")
       {
           if(a<50)printf("Keep patience Captain.\n");

          else printf("Wow! It is a boundary.\n");
       }

   }

   return 0;
}


