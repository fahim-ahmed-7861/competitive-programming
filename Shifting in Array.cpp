#include<bits/stdc++.h>
using namespace std;
int ara[1000];
int cra[1000];
void print(int n )
{
    for(int i=0; i<n; i++)cout<<ara[i]<<" ";

    cout<<endl;
}
void shift(int k,int n)
{
    int i;
      for(i=0; i<n; i++)
      {
          cra[(i+k)%n]=ara[i];
      }

      for(i=0;i<n; i++)ara[i]=cra[i];

}

int main()
{
    int i,k,t,n;
    cin>>n;

    for(i=0; i<n; i++)cin>>ara[i];

    printf("How many shift\n");
    cin>>t;

    while(t--)
    {
        cin>>k;

        k%=n;

        shift(k,n);

         print(n);

    }
}
