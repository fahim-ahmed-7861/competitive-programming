#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair <ll, ll> pll;

const int Max = 2e6 + 10;
const int Mod = 1e9 + 7;
const ll Inf = 1LL << 62;

ll ar[Max];

int main() {
        //ios_base::sync_with_stdio(false);
        //cin.tie(0);

        ll n, m, t, k, q, mx, mn;

        while( cin >> ar[1] ) {
                int idx = 1;
                char ch;
                while( getchar() != '\n' ) {
                        cin >> ar[++idx];
                }
                for( int i=1; i<=idx; i++ ) {
                        cout << ar[i] << " ";
                } cout << endl;
        }
        return 0;
}
