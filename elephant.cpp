#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum;

    scanf("%d",&n);

    sum=n/5;
    n%=5;

    if(n>0)sum++;

    cout<<sum<<endl;
}
