#include<iostream>
using namespace std;
int main()
{
    int i,j,n,p;

    cin>>n;

    p=(n/2)+1;

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(i==1 || i==5 || j==1 || j==5 || i==p && j==p)
                cout <<"* ";

            else cout << "  ";
        }
        cout << "\n";

    }
    return 0;
}
