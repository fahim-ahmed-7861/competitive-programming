#include<bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false),cin.tie(NULL));
#define INF 99999
int dis[10][10];
int e,v;
int printsolution()
{
     printf ("Following matrix shows the shortest distances"
            " between every pair of vertices \n");

    int i,j;

    for(i=0; i<v; i++)
    {
        for(j=0; j<v; j++)
        {
            if(dis[i][j]==INF)
                printf("INF ");

            else printf("%d ",dis[i][j]);
        }
        printf("\n");
    }
}
int floydwarshal()
{
    int  i, j, k;

    for(k=0; k<v; k++)
    {
        for(i=0; i<v; i++)
        {
            for(j=0; j<v; j++)
            {
                dis[i][j]=min((dis[i][k]+dis[k][j]),dis[i][j]);
            }
        }
    }
}
int initialize( )
{
     for(int i=0; i<v; i++)
     {
         for(int j=0; j<v; j++)
         {
             if(i==j)dis[i][j]=0;


            else dis[i][j]=INF;
         }
     }
}
void input()
{
    int w;
    char a,b;
    for(int i=1; i<=e; i++)
     {
         cin>>a>>b>>w;

           dis[a-'A'][b-'A']=w;

            dis[b-'A'][a-'A']=w;
     }
}
int main()
{
    fastread();

     int i,a,b,w;


     cin>>v>>e;


     dis[v+2][v+2];

    initialize();

     input();

    floydwarshal();
    printsolution();
}
