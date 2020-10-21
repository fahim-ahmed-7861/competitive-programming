#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,j,p;
    char str[100],ch[100],cons[150];
    cin>>t;
    while(t--)
    {
        scanf("%s %s",str,ch);

    for(p=0,i=0,j=0;str[i]!='\0' && ch[j]!='\0';p++ )
        {
            if(p%2==0) cons[p]=str[i++];

            else cons[p]=ch[j++];
        }
        if(str[i]!='\0')
        {
            for( ;str[i]!='\0'; i++)
            {
                cons[p++]=str[i];
            }
        }
        else
        {
            for( ;ch[j]!='\0'; j++)
            {
                cons[p++]=ch[j];
            }
        }
        cons[p]='\0';

        cout<<cons<<endl;
    }
    return 0;
}
