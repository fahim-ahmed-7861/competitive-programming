#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));

int main()
{
   fastread();

   ll i,j,n;


   cin>>n;

     ll ara[n+1];

     for(i=0; i<n; i++)
        cin>>ara[i];

     ll bra[n+1];

     partial_sum(ara,ara+n,bra);


     for(i=0; i<n; i++)
        cout<<bra[i]<<" ";
}

