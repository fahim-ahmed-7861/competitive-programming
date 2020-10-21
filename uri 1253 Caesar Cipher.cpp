#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;

    int n,a,k,t;

    scanf("%d",&t);

    cin.ignore();

    while(t--)
    {
        getline(cin,str);

        scanf("%d",&k);

        cin.ignore();


        n=str.size();

        for(int i=0; i<n; i++)
        {
            a=str[i]-k;

            if(a<65)
                str[i]=a+26;

            else
                str[i]=a;

        }
        cout<<str<<endl;
    }
    return 0;
}
