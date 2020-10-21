#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,temp,c=0;

    while(cin>>n)
    {
        c=0;
    int ara[n+1];
    for(i=0; i<n; i++)cin>>ara[i];

      for ( int i = 0; i < n; i++ ) {
            for ( int j = i + 1; j < n; j++ )
                if ( ara [i] > ara [j] ) c++;
        }


        printf("Minimum exchange operations : %d\n",c);
    }


    return 0;
}

