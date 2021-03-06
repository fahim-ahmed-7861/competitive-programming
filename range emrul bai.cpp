#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair <ll, ll> pll;

const int Max = 2e6 + 10;
const int Mod = 998244353;
const ll Inf = 1LL << 62;

int l[Max];
int r[Max];

ll f[Max], inv[Max];

ll BigMod(ll a, int e) {
        if(e == -1) {
                e = Mod - 2;
        }
        ll r = 1;
        while(e) {
                if(e & 1) {
                        r *= a, r %= Mod;
                }
                a *= a, a %= Mod, e >>= 1;
        }
        return r;
}

ll nCr(int x, int y) {
        if(x < 0 or y < 0 or x < y) {
                return 0;
        }
        return f[x] * (inv[y] * inv[x - y] % Mod) % Mod;
}

void init() {
        f[0] = 1;
        for(int i = 1; i < Max; ++i) {
                f[i] = i * 1LL * f[i - 1] % Mod;
        }
        inv[Max - 1] = BigMod(f[Max - 1], -1);
        for(int i = Max - 1; i; --i) {
                inv[i - 1] = i * 1LL * inv[i] % Mod;
        }
}

int main() {
        ios_base::sync_with_stdio(false);
        cin.tie(0);

        init();
        int n, k;
        cin >> n >> k;
        set <int> st;
        map <int, vector <int>> add, rmv;
        for(int i = 1; i <= n; i++) {
                cin >> l[i] >> r[i];
                st.insert(l[i]);
                st.insert(r[i]);
                add[l[i]].push_back(i);
                rmv[r[i]].push_back(i);
        }
        set <int> alive;
        ll ans = 0;
        for(int x : st) {
                for(int y : add[x]) {
                        ans += nCr(alive.size(), k - 1);
                        ans %= Mod;
                        alive.insert(y);
                }
                for(int y : rmv[x]) {
                        alive.erase(y);
                }
        }
        cout << ans << endl;
        return 0;
}

///https://codeforces.com/contest/1420/problem/D



