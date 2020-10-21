#include<stdio.h>
#include<string.h>
int max(int a,int b)
{
    if(a>b)return a;

    else return b;
}
int lcs(char str[],int m,char ctr[],int n)
{
    int i,j;

    int Lcs[n+5][m+5];

    for(i=0; i<=n; i++)
    {
        for(j=0; j<=m; j++)
        {
            if(i==0 || j==0) Lcs[i][j]=0;

            else if(str[j-1]==ctr[i-1]) Lcs[i][j]=Lcs[i-1][j-1]+1;

            else
                Lcs[i][j]=max(Lcs[i-1][j],Lcs[i][j-1]);

        }
    }

    return Lcs[n][m];
}
int main()
{
    char str[100],ctr[100];

   scanf(" %[^\n]",str);

   scanf(" %[^\n]",ctr);

    int i,j,n,m;

    n=strlen(str);
    m=strlen(ctr);

    printf("%d\n",lcs(str,n,ctr,m));


}
