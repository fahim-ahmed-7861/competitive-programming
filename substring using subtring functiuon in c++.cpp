#include<bits/stdc++.h>
using namespace std;

void substring(string str,int n)
{
    int i,j;
    string str2;

    for(i=0; i<n; i++)
    {
        for(j=1; j<=n-i; j++)
        {
            cout<<str.substr(i,j)<<endl;
        }
    }
}

int main()
{

  string  s = "ABCD";
    substring(s,s.size());
    return 0;
}
