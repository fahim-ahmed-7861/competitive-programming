#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t,n,i,sum,k,j;

     scanf("%d",&t);

     string str;

     while(t--)
     {
         sum=0;
         scanf("%d",&n);

         cin.ignore();

         for(i=0; i<n; i++)
         {
             getline(cin,str);

             k=str.size();

             for(j=0; j<k; j++)
             {
                 sum+=i+j+(str[j]-65);

             }

         }

         printf("%d\n",sum);
     }
}

