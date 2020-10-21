#include<bits/stdc++.h>
using namespace std;

#define MAX 10005

int e,cnt;
vector<int>v[MAX];
vector<int>::iterator it;

stack<int>q;
bool visited[MAX];

void input()
{
    int a,b,i;

    for(i=0; i<e; i++)
    {
        scanf("%d %d",&a,&b);


        v[a].push_back(b);
    }
}

void dfs(int s)
{
    int k,n,i;

    visited[s]=true;


    q.push(s);

    while(!q.empty())
    {
        n=q.top();
        q.pop();

        cnt++;

        for(it=v[n].begin(); it!=v[n].end(); it++)
        {
            k=*it;

            if(visited[k]==false)
            {
                q.push(k);

                visited[k]=true;
            }
        }
    }

}
int main()
{
    int t,n,l,i;

    scanf("%d",&t);

    while(t--)
    {
        cnt=0;

        scanf("%d %d %d",&n,&e,&l);

        input();

        while(l--)
        {

            int start;

            scanf("%d",&start);

            if(!visited[start])
                dfs(start);
        }

        printf("%d\n", cnt);

        for(i=0; i<n; i++)
        {
            v[i].clear();
        }
        fill(visited, visited + MAX, false);
    }
    return 0;
}
