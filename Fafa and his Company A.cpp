#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0;

    scanf("%d",&n);
    int sum=n/2,i;

    for(i=2; i<=sum; i++)
    {
        if(n%i==0)c++;
    }
    printf("%d\n",c+1);

    return 0;
}
