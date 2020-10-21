#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[4], i, j, n;

    cin>>n;

    for(i = 1; i <= n; ++i){


        for(j = 0; j < 3; ++j)
           cin>>a[j];

        sort(a, a + 3);

        printf("Case %d: %d\n", i, a[1]);
    }

    return 0;
}
