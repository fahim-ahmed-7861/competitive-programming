#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<char>s;

    string str;
    char ch;

    int n,a,p,i;

    while(scanf("%d%c",&n,&ch)==2 && n)
    {
        getline(cin,str);
        p=str.size();
        a=p/n;

        for(i=0; i<p; i++)
        {
            s.push(str[i]);

            if((i+1)%a==0)
            {
                while(s.size())
                {
                    printf("%c",s.top());
                    s.pop();
                }
            }
        }
        while(s.size())
        {
            printf("%c",s.top());
            s.pop();
        }
        printf("\n");
    }
    return 0;
}
