#include<bits/stdc++.h>
using namespace std;
int mark[100005] = {};
void sieve() {
    int i, j;
    mark[1] = 1;
    mark[0] = 1;
    for(i = 2; i <= 316; i++) {
        if(mark[i] == 0) {
            for(j = i+i; j <=100000; j += i)
                mark[j] = 1;
        }
    }
}
int main()
{
    sieve();
    int n,i,k,m,ans;

    char str[1024];

    while(scanf("%s",str)==1)
    {
        ans=0;
        n=strlen(str);
        if(str[0]=='0' && n==1)break;

        for(i=0; i<n; i++)
        {
            string s;
            s.clear();
            for(k=0; k<6 ; k++)
            {
              s=s+str[i+k];
             m = stoi(s);

             if(ans<m && m<=100000)
             {
                 if(mark[m]==0)
                 {
                    ans=m;
                 }
             }
            }
        }

        printf("%d\n",ans);

    }
    return 0;

}

