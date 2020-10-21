#include<bits/stdc++.h>
using namespace std;

int divisor(int n)
{
    int sq=sqrt(n);

    int cnt=1;

    for(int i=2; i<=sq; i++)
        if(n%i==0)cnt++;


    cnt=cnt*2;

    if(sq*sq==n)
        cnt--;

    return cnt;
}
int main()
{
    int n;

    cin>>n;

    cout<<divisor(n)<<endl;
}
