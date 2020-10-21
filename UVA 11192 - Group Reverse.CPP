#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<char>s;

    char str[101];
    char ch;

    int n,a,p,i;

    while(scanf("%d",&n)==1 && n!=0)
    {
        scanf("%s",str);
        p=strlen(str);

        cout<<p<<endl;

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
