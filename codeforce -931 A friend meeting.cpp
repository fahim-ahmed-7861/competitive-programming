#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,m,s1,s2;

     scanf("%d %d",&n,&m);

     int sum=abs(n-m);

     s1=sum/2;

     s2=sum-s1;

     sum=(s1*(s1+1))/2;

     sum+=(s2*(s2+1))/2;

     printf("%d\n",sum);

     return 0;


}
