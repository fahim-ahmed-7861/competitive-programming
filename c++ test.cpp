#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m,i;
    scanf("%d",&t);
   string str,ctr,k;
   cin.ignore();

   while(t--)
   {
   getline(cin,str);

   ctr="";
   k="";

   for(i=0; i<str.size(); i++)
   {

       while(str[i]!=' ')
       {
           ctr+=str[i];
           i++;
       }
       break;
   }
   i++;

   for( ; i<str.size(); i++)
   {

       while(str[i]!=' ')
       {
           k+=str[i];
           i++;
       }
       break;
   }

   if(stoi(ctr)%stoi(k)==0)printf(":wink:\n");

   else printf(":kick:\n");
   }
   return 0;

}
