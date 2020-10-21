#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,int>pp;
#define ischar(x)  (('a' <= x && x <= 'z') || ('A' <= x && x <= 'Z'))
#define fastread() (ios_base::sync_with_stdio(false),cin.tie(NULL));
int main()
{
    fastread();

    string str;
    int i=1;

    while(getline(cin,str))
    {
        if(str[0]=='#' && str.size()==1)break;

        if(str=="HELLO")printf("Case %d: ENGLISH\n",i++);

        else if(str=="HOLA")printf("Case %d: SPANISH\n",i++);

       else if(str=="HALLO")printf("Case %d: GERMAN\n",i++);

        else if(str=="BONJOUR")printf("Case %d: FRENCH\n",i++);

       else if(str=="CIAO")printf("Case %d: ITALIAN\n",i++);

       else if(str=="ZDRAVSTVUJTE")printf("Case %d: RUSSIAN\n",i++);

       else printf("Case %d: UNKNOWN\n",i++);

    }
}


