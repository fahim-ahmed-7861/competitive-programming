#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;

    scanf("%d",&t);

    cin.ignore();

    while(t--)
    {
        string str,ctr,ktr;

        getline(cin,str);

        int n=str.size(),k,i;

        k=n/2;

        for(i=0; i<k; i++)
            ktr+=str[i];

        reverse(ktr.begin(),ktr.end());

        for(i=k; i<n; i++)
            ctr+=str[i];

        reverse(ctr.begin(),ctr.end());

        ktr+=ctr;

        cout<<ktr<<endl;

    }
    return 0;

}
