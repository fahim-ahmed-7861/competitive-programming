#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,n,k,sum=0;
     string str,ch="";
     char c;

    scanf("%d%c",&n,&c);

   for(i=1; i<=n; i++)
   {
       getline (cin,str);

       str=str+ch;

       ch=str;

       if(i%2==0 && i%4!=0)
       {
           sort(str.begin(), str.end());
       }
   }
   for(i=str.size()-1,k=0; i>=0; i--)
   {
       if(str[i]=='s')k++;

       else sum+=k;
   }

   printf("%d\n",sum);
}
