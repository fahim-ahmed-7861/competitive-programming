#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ara[]={1,3,5,67,7,833,4,55},sum=0;

    for(int i: ara)
    {
        cout<<i<<" ";
        sum+=i;
    }
    cout<<ara[1]<<endl;

    cout<<sum<<endl;
}
