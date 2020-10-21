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

        n=str.size();

        if(ischar(str[0]))
            c==false;

        else if(str[0]=='.')
            c=true;

        for(i=0; i<n; i++)
        {
            if(ischar(str[i]) && c==true)
            {
                ktr+=str[i];
                c=false;
            }
            else if(!ischar(str[i]) && str[i]=='.')
                c=true;

        }

        cout<<ktr<<endl;

        ktr.clear();


    }
    return 0;

}
