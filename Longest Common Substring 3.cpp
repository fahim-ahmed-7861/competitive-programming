#include<bits/stdc++.h>
using namespace std;
int ma(int a,int b)
{
    return (a>=b)? a: b;
}
int lcs(char str[],int m,char ctr[],int n)
{
    int i,j;

    int Lcs[n+5][m+5];

    char sign[n+5][m+5];


    for(i=0; i<=n; i++)
    {
        for(j=0; j<=m; j++)
        {
            if(i==0 || j==0)
            {
                Lcs[i][j]=0;
                sign[i][j]='N';
            }

            else if(str[j-1]==ctr[i-1])

            {

                Lcs[i][j]=Lcs[i-1][j-1]+1;

                sign[i][j]='D';
            }

            else

            {

                Lcs[i][j]=max(Lcs[i-1][j],Lcs[i][j-1]);

                if(Lcs[i][j]==Lcs[i-1][j])
                    sign[i][j]='U';

                else
                    sign[i][j]='L';
            }
        }
    }

    for(i=0; i<=n; i++)
    {
        for(j=0; j<=m; j++)
        {
            printf("%c ",sign[i][j]);
        }
        cout<<endl;
    }

    char metch[100];
    i=n;
    j=m;
    int k=0;

      while(i>=0 && j>=0 && sign[i][j]!=0)
    {
        //printf("%c ",sign[i][j]);

        if(sign[i][j]=='L')j--;

        else if(sign[i][j]=='U')i--;


        else if(sign[i][j]=='N')break;

        else if(sign[i][j]=='D')
        {
            i--;
            j--;

            metch[k++]=ctr[i];
        }
    }
   metch[k]='\0';
    printf("%s\n",metch);


    return Lcs[n][m];
}
int main()
{
    char str[100],ctr[100];

   scanf("%s",str);

   scanf("%s",ctr);

    int i,j,n,m;

    n=strlen(str);
    m=strlen(ctr);

    printf("%d\n",lcs(str,n,ctr,m));


}
