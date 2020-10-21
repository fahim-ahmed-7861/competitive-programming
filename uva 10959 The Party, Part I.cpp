#include<bits/stdc++.h>
using namespace std;
#define MAX 1005
int e,n;
vector<int>v[MAX];

vector<int>::iterator it;

queue<int>q;

int cost[MAX];
bool visited[MAX],c=true;


void input()
{
    int a,b,i;

   scanf("%d %d",&n,&e);

   for(i=0;i<n;i++){

            v[i].clear();
       visited[i]=false;

       cost[i]=0;

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

        for(it=v[n].begin(); it!=v[n].end(); it++)
        {
            k=*it;

            if(visited[k]==false)
            {
                q.push(k);

                cost[k]=cost[n]+1;

                visited[k]=true;
            }
        }
    }
    return c;

}
void print()
{
    for(int i=1; i<n; i++)printf("%d\n",cost[i]);

}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
     input();

     bfs(0);

     print();

     if(t)printf("\n");

    }

    return 0;
}
