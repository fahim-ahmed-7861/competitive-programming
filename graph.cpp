#include<bits/stdc++.h>
using namespace std;

#define ll           long long
#define pll          pair<ll,ll>
#define pb           push_back
#define eb           emplace_back
#define F            first
#define S            second
#define vll(v)       v.begin(),v.end()
#define bug(a)       cerr << #a << " : " << a << endl;
#define fastread()     ios_base::sync_with_stdio(false);cin.tie(NULL);

const int Max = 2e5+10;

vector<ll>adj[Max+10];

ll n;

void input()
{
    ll a,b,i;

    cin>>n;

    for(i=1; i<n; i++)
    {
        cin>>a>>b;

        adj[a].eb(b);

        adj[b].eb(a);
   }
}



int main()
{
       fastread();

       input();

}

/*

12
1 2
1 3
2 12
2 10
12 11
3 4
4 9
3 5
5 6
5 7
5 8

*/
