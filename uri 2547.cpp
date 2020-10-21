#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,mi,ma,a,coun,height;
    while(cin>>n)
    {
        cin>>mi>>ma;
        coun=0;

        while(n--)
        {
            cin>>height;
            if(height>=mi && height<=ma)coun++;
        }
        cout<<coun<<endl;
    }
    return 0;
}

