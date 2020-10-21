#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    char str[100];

    while(t--)
    {
        scanf(" %[^\n]",str);
        if(str[0]=='H')cout<<68<<endl;

        else if(str[0]=='M')cout<<40<<endl;

        else cout<<20<<endl;
    }
    return 0;
}
