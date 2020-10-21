#include<bits/stdc++.h>
using namespace std;
typedef struct
{
    int activity;
    int start;
    int end;
}one;
bool compare(one a,one b)
{
    return a.end<b.end;
}
int main()
{
   one ara[100];

   int n,i,p,c;
   cin>>n;


   for(i=0; i<n; i++)
    cin>>ara[i].activity>>ara[i].start>>ara[i].end;

   sort(ara,ara+n,compare);

cout<<endl;

   for(i=0; i<n; i++)
   {
       cout<<ara[i].activity<<" "<<ara[i].start<<" "<<ara[i].end<<endl;
   }


   i=0;
   p=i;
   c=1;
   cout<<endl;

   cout<<ara[i].activity<<" "<<ara[i].start<<" "<<ara[i].end<<endl;

   for(i=1; i<n; i++)
   {
       if(ara[i].start>=ara[p].end)
       {
           p=i;
           c++;
           cout<<ara[i].activity<<" "<<ara[i].start<<" "<<ara[i].end<<endl;
       }
   }
   cout<<endl<<c<<endl;
}


/*

3
3 8 12
4 0 9
7 9 13


*/

