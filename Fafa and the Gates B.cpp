#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,i,c=0,u=0,y=0,x=0;

     scanf("%d",&n);

     char str[n+10];

     scanf("%s",str);

     for(i=0; i<n; i++)
     {

         if(str[i]=='U')y++;

         else x++;

         if(x==y)
         {
             if(i+1!=n && str[i]==str[i+1])c++;
         }


     }
     cout<<c<<endl;
}

