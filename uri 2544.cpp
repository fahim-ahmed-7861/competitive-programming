#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,coun;

    while(cin>>n)
       {
           coun=0;
           n=n/2;
           while(n>0)
           {
               coun++;
               n/=2;
           }
           cout<<coun<<endl;
       }

    return 0;
}
