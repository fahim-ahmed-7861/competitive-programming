#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long bhajok,bhagsesh=0;

    string bajjo;

    cin>>bajjo>>bhajok;

    int len=bajjo.size();

    for(int i=0; i<len; i++)
    {
        bhagsesh=((bhagsesh*10)+(bajjo[i]-'0'))%bhajok;

        //cout<<bhagsesh<<endl;
    }

    cout<<bhagsesh<<endl;
}
