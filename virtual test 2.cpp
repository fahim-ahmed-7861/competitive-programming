#include<bits/stdc++.h>
using namespace std;
char e;

int node,cnt=0;
vector<int>v[35];
stack<int>q;

bool visited[35];

void input()
{
    int i;

    int a,b;

    cin>>e;

    string str;

    //cin.ignore();
    getline(cin,str);

    while(1){

        if(!getline(cin,str) || str.empty())break;


         a=str[0]-'A';
         b=str[1]-'A';

        v[a].push_back(b);

        v[b].push_back(a);
    }
   // n=s.size();
}

int dfs(int start)
{
  //  cnt++;
    visited[start] = true;
    q.push(start);
    while(!q.empty())
    {
        // cnt++;
        int n = q.top();
        q.pop();
        //cout << n << endl;
        for(int i=0;i<v[n].size();i++)
        {
            int x = v[n][i];
            if(!visited[x])
            {
                q.push(x);
                visited[x] = true;
            }
        }

    }
}
int main()
{
    int t;

    cin>>t;

    scanf("\n");

    while(t--)
    {
        int i;

        for(i=0; i<=29; i++)
        {
            v[i].clear();

            visited[i]=false;
        }
    input();

     cnt=0;

     int m=0;

     int k=e-'A';

 //    dfs(0);

     for( i=0; i<=k; i++)
     {

         if(visited[i]==false)
         {
             dfs(i);
             cnt++;
         }

     }
    cout <<cnt<<endl;

    if(t)cout<<endl;
    }

}
