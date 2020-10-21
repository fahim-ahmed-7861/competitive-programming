#include<bits/stdc++.h>

using namespace std;

#define fRead(x)  freopen(x,"r",stdin)
#define fWrite(x) freopen (x,"w",stdout)

#define LL long long
#define ULL unsigned long long
#define ff first
#define ss second
#define pb push_back
#define INF 2e16
#define PI acos(-1.0)
#define mk make_pair

#define min3(a,b,c) min(a,min(b,c))
#define max3(a,b,c) max(a,max(b,c))
#define min4(a,b,c,d) min(a,min(b,min(c,d)))
#define max4(a,b,c,d) max(a,max(b,max(c,d)))
#define SQR(a) ((a)*(a))
#define FOR(i,a,b) for(int i=a;i<=b;i++)
#define ROF(i,a,b) for(int i=a;i>=b;i--)
#define REP(i,b) for(int i=0;i<b;i++)
#define MEM(a,x) memset(a,x,sizeof(a))
#define ABS(x) ((x)<0?-(x):(x))

#define scanI(a) scanf("%d",&a)
#define scanI2(a,b) scanI(a) , scanI(b)
#define scanI3(a,b,c) scanI(a), scanI(b), scanI(c)
#define scanI4(a,b,c,d) scanI(a), scanI(b), scanI(c), scanI(d)

#define scanL(a) scanf("%I64d",&a)
#define scanL2(a,b) scanL(a) , scanL(b)
#define scanL3(a,b,c) scanL(a), scanL(b), scanL(c)
#define scanL4(a,b,c,d) scanL(a), scanL(b), scanL(c), scanL(d)

#define SORT(v) sort(v.begin(),v.end())
#define REV(v) reverse(v.begin(),v.end())

#define FastRead ios_base::sync_with_stdio(0);cin.tie(nullptr);

LL BigMod(LL B,LL P,LL M){LL R=1;while(P>0){if(P%2==1){R=(R*B)%M;}P/=2;B=(B*B)%M;}return R;}

struct info
{
    char ch;
    int x,y;
};
vector<info>v;
set<int>vec;
map<int,int>mp;
multiset<int>seg[505],G[200005];
int sq;
int reg(int x)
{
    return x/sq;
}
int main()
{
    FastRead
    int q;
    cin >> q;

    while(q--)
    {
        string str;
        int a,b;
        cin >> str;
        cin >> a >> b;
        v.pb({str[0],a,b,});
        vec.insert(a);
    }
    vector<int> vv(vec.begin(),vec.end());
    sq = sqrt(vec.size())+1;

    REP(i,vv.size())
    {
        mp[vv[i]]=i;
    }

    REP(i,v.size())
    {
        char ch = v[i].ch;
        if(ch=='a')
        {


            G[mp[v[i].x]].insert(v[i].y);
            seg[reg(mp[v[i].x])].insert(v[i].y);
        }
        else if(ch=='r')
        {
            G[mp[v[i].x]].erase(v[i].y);
            seg[reg(mp[v[i].x])].erase(v[i].y);
        }
        else{
            int px = -1,py=-1;

            int region = reg(mp[v[i].x]);

            int R = (region+1)*sq;

            bool found = 0;
//            cout << "here\n";
            for(int j = mp[v[i].x]+1 ; j<R;j++)
            {
                auto it = G[j].upper_bound(v[i].y);
                if(it!=G[j].end())
                {
                    found = 1;
                    px = vv[j]; py = *it;
                    break;
                }
            }
            if(found == 1)goto here;

            for(int k =region+1;k<500;k++)
            {
                auto it = seg[k].upper_bound(v[i].y);
                if(it!=seg[k].end())
                {
                    int L = k*sq;
                    int R = (k+1)*sq;
                    for(int j = L;j<R;j++)
                    {
                        auto pt = G[j].upper_bound(v[i].y);
                        if(pt!=G[j].end())
                        {
                            found = 1;
                            px = vv[j]; py = *pt;
                            break;
                        }
                    }
                    if(found)break;
                }
            }
            here:
                if(!found)cout << -1 << "\n";else
                cout << px << " " << py << "\n";
        }
    }


}
