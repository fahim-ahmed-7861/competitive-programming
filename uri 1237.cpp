#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,p,s,num=0,len,m=0;

    char str[101],sub[101];


    while(cin.getline(str,101))
    {
        cin.getline(sub,101);

        num=0;
        m=0;

        len=strlen(str);

        s=strlen(sub);

        for(i=0; i<len; i++)
        {
            p=i;
            num=0;
            for(j=0; j<s; j++)
            {
                if(str[i]==sub[j])
                {
                    num++;
                    i++;
                }
                else if(num>0)
                {
                    i=p;
                    if(num>m)
                        m=num;
                    num=0;
                }

            }
            cout<<num<<endl;
           /* if(i>p)
                i--;*/

            if(num>m)
                m=num;
        }
        cout<<m<<endl;
    }
    return 0;

}

