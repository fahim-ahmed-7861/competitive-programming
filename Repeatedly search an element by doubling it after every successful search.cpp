#include<bits/stdc++.h>
using namespace std;
int findelement(int ara[],int n,int k)
{
      while(k<ara[n-1])
      {
          if(binary_search(ara,ara+n,k))
            k*=2;

          else return k;
      }
}

int main()
{
    int n,i,k;

    cin>>n;

    int ara[n];

    for(i=0; i<n; i++)cin>>ara[i];

    cout<<"input a element"<<endl;

    cin>>k;

    sort(ara,ara+n);

    cout<<findelement(ara,n,k)<<endl;


}
