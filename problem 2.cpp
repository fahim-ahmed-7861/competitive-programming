#include<iostream>
using namespace std;
int main()
{
    int i,j,n,p;

    cin>>n;

    p=(n/2);

   p++;

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(i==1 || i==n || j==1 || j==n || i==p && j==p)
                cout <<"* ";

            else cout << "  ";
        }
        cout << "\n";

    }
    return 0;
}
