#include <bits/stdc++.h>
using namespace std;
map<string,int> visit;
string s[200005];
void print_map( map<string,int>s)
{
     map<string,int>::iterator it;

    for(it=s.begin(); it!=s.end(); it++)
    {
    cout <<it->first << " "<<it->second<<endl;
    }
}
int main()
{
    int n,i;

    while (scanf("%d",&n)!=EOF)
    {
        for (i = 0;i<n;i++)
        {
            cin >> s[i];
            //visit[s[i]]=1;
        }

        for (i = n-1;i>=0;i--)
        {
            if (visit[s[i]]!=1)
            {
                cout << s[i] << endl;
            visit[s[i]]=1;
            }
        }
        print_map(visit);
    }

    return 0;
}
