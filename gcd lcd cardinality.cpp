#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <vector>
typedef long long ll;
using namespace std;

ll gcd(ll a, ll b) {
    return b == 0 ? a : gcd(b, a%b);;
}

ll lcm(ll a, ll b) {
    return a/gcd(a, b)*b;
}

ll n;

int main() {
    while (scanf("%lld", &n) != EOF && n) {
        vector<ll> ve;
        for (ll i = 1; i * i <= n; i++) {
            if (n % i == 0) {
                ve.push_back(i);
                if (i * i != n)
                    ve.push_back(n/i);
            }
        }
        ll size = ve.size();
        ll ans = 0;
        for (ll i = 0; i < size; i++)
            for (ll j = i; j < size; j++)
                if (lcm(ve[i], ve[j]) == n)
                    ans++;
        printf("%lld %lld\n", n, ans);
    }
    return 0;
}
