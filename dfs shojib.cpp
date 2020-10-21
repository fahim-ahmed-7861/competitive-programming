#include<iostream>
#include<stdio.h>
#include<vector>
#include<stack>
using namespace std;
int e;
vector<int>v[1000];
vector<int>::iterator it;
stack<int>q;

int cost[100];
bool visited[100];

void print()
{
    int i;
    printf("How many edge: ");
    for(i=0; i<e; i++)
    {
        if(!v[i].empty())
        {
            printf("%d---->",i);
            for(it=v[i].begin(); it!=v[i].end(); it++)
            {
                printf("%d ",*it);
            }
            cout<<endl;
        }
    }
}

void input()
{
    int a,b,i;

    printf("how many edge : ");

    cin>>e;

    for(i=0; i<e; i++)
    {
        cin>>a>>b;

        v[a].push_back(b);

        v[b].push_back(a);
    }
}

void dfs(int s)
{
    int k,n,i;

    visited[s]=true;

    cost[s]=0;

    q.push(s);

    while(!q.empty())
    {
        n=q.top();
        q.pop();

        printf("%d(%d) ",n,cost[n]);
        for(i=0; i<v[n].size(); i++)
        {
            k=v[n][i];

            if(visited[k]==false)
            {
                q.push(k);

                cost[k]=cost[n]+1;

                visited[k]=true;
            }
        }
    }

}
int main()
{
    input();

    print();

    int start;
    cout << "Enter the value of starting point : ";
    cin >> start;
    cout << endl;
    dfs(start);
}
