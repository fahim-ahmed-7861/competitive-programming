#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;

    int cnt=1;

    cin>>str;

    while(next_permutation(str.begin(),str.end()))cnt++;

    cout<<cnt<<endl;

    int ara[]={1,3,4,5,2};

    int n=5;
    cnt=1;


    while(next_permutation(ara,ara+n))cnt++;

    cout<<cnt<<endl;

}
