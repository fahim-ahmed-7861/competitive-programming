#include<iostream>
using namespace std;


int main()
{
    int n=5,m=6,s=2;

    int ara[n][m][s],i,j,k;

    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            for(k=0; k<s; k++)
                cin>>ara[i][j][k];
        }
    }

    cout<<"OUTPUT"<<endl;
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            for(k=0; k<s; k++)
                cout<<ara[i][j][k]<<" ";

                 cout<<endl;
        }
        cout<<endl;
    }

}

/*

role for convert a 2d fronm 3d

row = n*m
coloum = s

*/

/*
1 2
2 3
3 4
4 5
5 6
6 7
1 2
2 3
3 4
4 5
5 6
6 7
1 2
2 3
3 4
4 5
5 6
6 7
1 2
2 3
3 4
4 5
5 6
6 7
1 2
2 3
3 4
4 5
5 6
6 7
*/
