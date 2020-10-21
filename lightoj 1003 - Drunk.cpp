#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k=1;

    scanf("%d",&t);

    string str[3];

    bool c=true;

    while(t--)
    {
        scanf("%d",&n);

        while(n--)
        {
        cin>>str[0]>>str[1];

        if(str[0]=="wine")c=false;
        }

        if(c)printf("Case %d: Yes\n",k++);

        else printf("Case %d: No\n",k++);
    }
    return 0;
}
