#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
const int MAXN = 1e3+5;
int sg[MAXN];
int h[MAXN];
void get_sg()
{
    memset(sg, 0, sizeof(sg));
    for(int i=1; i<MAXN; i++)
    {
        memset(h, 0, sizeof(h));
        for(int j=1; j<=i/2; j++)
        {
            h[sg[i-j]] = 1;
        }
        int j;
        for(j=0; ;j++)
        {
            if(!h[j])
                break;
        }
        sg[i] = j;
    }

}
int main()
{
    get_sg();
    int T;
    scanf("%d",&T);
    for(int cas=1; cas<=T; cas++)
    {
        int m, x, ans=0;
        scanf("%d",&m);
        for(int i=0; i<m; i++)
        {
            scanf("%d",&x);

             ans^=sg[x];
        }
        if(!ans)
            printf("Case %d: Bob\n",cas);
        else
            printf("Case %d: Alice\n",cas);
    }
    return 0;
}
