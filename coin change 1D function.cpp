#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MAX 30000
ll table[MAX+1];

//int coin[]={1,5,10,25,50};

int coin[]={2,5,5};

int coin_change( )
{
   int i,j,m=3,n=MAX;

   fill(table,table+n,0);

   table[0]=1;

   for(i=0; i<m; i++)
   {
       for(j=coin[i]; j<=n; j++)
       {
           table[j]+=table[j-coin[i]];
       }
   }
}
int main()
{
    int i,j,n,taka;


     coin_change();

    while(scanf("%d",&taka))
       printf("%d\n",table[taka]);

}


