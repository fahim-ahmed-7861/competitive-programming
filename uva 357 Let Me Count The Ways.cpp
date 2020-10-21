#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

ll table[30001];
void coin_change( )
{

    int m=5,i,j,n=30000;

    ll coin[6]={1,5,10,25,50};

    fill(table, table+n, 0);

    table[0] = 1;

    for(i=0; i<m; i++)
    {
        for( j=coin[i]; j<=n; j++)
        {
            table[j] += table[j-coin[i]];
        }
    }

}
int main()
{
    coin_change();

    int taka;

    while (cin >> taka)
    {
        if (table[taka] == 1)
            cout << "There is only 1 way to produce " << taka << " cents change.\n";
        else
            cout << "There are " << table[taka] << " ways to produce " << taka << " cents change.\n";
    }
    return 0;

}
