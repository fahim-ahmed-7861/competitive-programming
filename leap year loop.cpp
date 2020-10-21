#include<bits/stdc++.h>
using namespace std;
int main()
{
    int year,i,k=0;
    scanf("%d",&year);


  /* for(i=0; i<=year; i++)
   {
    if(i%400==0 || i%100!=0 && i%4==0)
    {
        k++;
    }
   }*/
   k=year/400;

   k+=year/4;

   k-=year/100;

   //k--;
    cout<<k;
}
