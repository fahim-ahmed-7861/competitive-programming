#include<bits/stdc++.h>
using namespace std;
vector<int>v[10];
queue<int>q;

int k;

bool visited[10];

int cost[100];
void bfs(int s)
{
    q.push(s);

    visited[s]=true;

    cost[s]=0;

    while(!q.empty())
    {
        int u=q.front();
        q.pop();

        printf("SIZE : %d\n",v[u].size());
       // printf("%d(%d) ",u,cost[u]);

        for(int i=0; i<v[u].size(); i++)
        {
            k=v[u][i];

                printf("%d\n",k);
            if(visited[v[u][i]]==false)
            {
                k=v[u][i];

                printf("k\n");

                visited[k]=true;

                cost[k]=cost[u]+1;

                q.push(k);

            }
        }
    }
}

int main()
{
    //int ara[50][50];

    int n,i,e,a,b;
    scanf("%d %d",&n,&e);

    for(i=0; i<e; i++)
    {
        scanf("%d %d",&a,&b);

        v[a].push_back(b);

        v[b].push_back(a);
    }

    vector<int>::iterator it;

   // i=0;
   for ( i = 0; i <10; i++ )
  {
       if(!v[i].empty())
       {
           printf("%d---->",i);

           for(it=v[i].begin(); it!=v[i].end(); it++)
           {
               printf("%d ",*it);
           }
           printf("\n");
       }
  }
  int s;

  cin>>s;

    printf("\n\n");

  bfs(s);



}
