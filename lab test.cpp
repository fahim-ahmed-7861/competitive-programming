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

   int n,i,p,j,c;
   cin>>n;
   one temp;


   for(i=0; i<n; i++)
    cin>>ara[i].activity>>ara[i].start>>ara[i].end;

  for(i=0; i<n-1; i++)
  {
      for(j=i; j<n; j++)
      {
          if(ara[i].end>ara[j].end)
          {
              temp=ara[i];
              ara[i]= ara[j];
              ara[j]=temp;

          }
      }
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
