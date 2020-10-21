#include<bits/stdc++.h>
using namespace std;
#define fast() (ios_base:: sync_with_stdio(false),cin.tie(NULL));

int main()
{
   fast();

   long long int i,sum,n,t;

   cin>>t;

   while(t--)
   {
       string str;

       cin>>str;

       sum=0;

       n=str.size();

       for(i=0; i<n; i++) if(str[i]=='1')sum++;


       if(sum%2)cout<<"WIN"<<endl;

       else cout<<"LOSE"<<endl;


   }


}

