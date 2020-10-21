#include<bits/stdc++.h>
using namespace std;
int e,n;
vector<int>v[300];

queue<int>q;

int cost[300];
bool visited[300],c=true;


void input()
{
    int a,b,i;

   scanf("%d",&e);

   for(i=0;i<n;i++){

            v[i].clear();
       visited[i]=false;

    }

    for(i=0; i<e; i++)
    {
        cin>>a>>b;

        v[a].push_back(b);

        v[b].push_back(a);
    }
}

bool bfs(int s)
{
    int k,n,i;

    visited[s]=true;

    cost[s]=0;

    q.push(s);

    while(!q.empty() && c==true)
    {
        n=q.front();
        q.pop();

        for(i=0; i<v[n].size(); i++)
        {
            k=v[n][i];

            if(visited[k]==false)
            {
                q.push(k);

                cost[k]=cost[n]+1;

                visited[k]=true;
            }
            else if(cost[k]==cost[n])
            {
                c=false;

                return c;

                break;
            }
        }
    }
    return c;

}
int main()
{
    while(scanf("%d",&n)==1 && n)
    {
     input();

     if(bfs(0))printf("BICOLORABLE.\n");

     else printf("NOT BICOLORABLE.\n");

     c=true;

    }

    return 0;
}
