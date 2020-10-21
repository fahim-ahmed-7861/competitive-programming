#include<bits/stdc++.h>
#define ischar(x)  ('a' <= x && x <= 'z')
using namespace std;
int main()
{

    int t,n,i;

    bool c;

    scanf("%d",&t);

    string str,ktr;

    cin.ignore();

    while(t--)
    {
        getline(cin,str);

       stringstream s(str);

       while (s >> str)
      cout << str[0];

        cout<<endl;


    }
    return 0;

}

