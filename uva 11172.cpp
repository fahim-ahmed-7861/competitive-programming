#include <iostream>

using namespace std;

int main()
{

    int n,i;
    cin>>n;
    int a,b;
    for(i=0;i<n;i++)
    {
        cin>>a>>b;
        if(a<b) cout<<"<"<<endl;
        else if(a>b) cout<<">"<<endl;
        else cout<<"="<<endl;
    }

    return 0;
}