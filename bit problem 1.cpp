#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair <ll, ll> pll;

const int Max = 3e5 + 10;
const int Mod = 1e9 + 7;
const ll Inf = 1LL << 62;

ll Set(ll num, ll pos) {
        return num | (1LL << pos);
}

ll Clear(ll num, ll pos) {
        return num & ~(1LL << pos);
}

ll Toggle(ll num, ll pos) {
        return num ^ (1LL << pos);
}

bool Check(ll num, ll pos) {
        return (bool)(num & (1LL << pos));
}

int ar[Max][10];

int main() {
#ifdef Mr_Emrul
        freopen("inputf.in", "r", stdin);
#endif /// Mr_Emrul

        int n, m;
        scanf("%d %d", &n, &m);
        int len = 1 << m;
        vector <pair <int, int>> vec;
        for(int i = 0; i < len; i++) {
                vec.push_back({-1, -1});
        }
        for(int i = 1; i <= n; i++) {
                for(int j = 0; j < m; j++) {
                        scanf("%d", &ar[i][j]);
                }
                for(int k = 0; k < len; k++) {
                        int mn = INT_MAX;
                        for(int l = 0; l < m; l++) {
                                if(Check(k, l)) {
                                        mn = min(mn, ar[i][l]);
                                }
                        }
                        if(mn == INT_MAX) {
                                continue;
                        }
                        if(vec[k].first < mn) {
                                vec[k].first = mn;
                                vec[k].second = i;
                        }
                }
        }
        int l = 0, r = 1e9;
        int ans = 0, lx = 1, rx = 1;
        while(l <= r) {
                int mid = (l + r) >> 1;
                int f = 0;
                for(int i = 1; i <= n; i++) {
                        int now = 0;
                        for(int j = 0; j < m; j++) {
                                if(ar[i][j] < mid) {
                                        now = Set(now, j);
                                }
                        }
                        if(now == 0) {
                                f = 1;
                                lx = i;
                                rx = i;
                                break;
                        }
                        else if(vec[now].first != -1) {
                                if(vec[now].first >= mid) {
                                        f = 1;
                                        lx = i;
                                        rx = vec[now].second;
                                        break;
                                }
                        }
                }
                if(f) {
                        ans = mid;
                        l = mid + 1;
                }
                else {
                        r = mid - 1;
                }
        }
       // printf("-- %d\n", ans);
        printf("%d %d\n", lx, rx);
        return 0;
}
