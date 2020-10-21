#include<bits/stdc++.h>
using namespace std;
int ma(int a,int b)
{
    if(a>b)return a;

    else return b;
}
int Lcs(string  str,int n,string ctr,int m)
{
    int i,j,k=0,lcs[m+5][n+5];
    char sign[m+5][n+5];

    string metch;

    for(i=0; i<=m; i++)
    {
        for(j=0; j<=n; j++)
        {
            if(i==0 || j==0)
            {
                sign[i][j]='N';
                lcs[i][j]=0;
            }

            else if(str[j-1]==ctr[i-1])
            {
                sign[i][j]='C';
                lcs[i][j]=lcs[i-1][j-1]+1;
            }
            else
            {
                lcs[i][j]=ma(lcs[i-1][j],lcs[i][j-1]);

                if(lcs[i][j]==lcs[i-1][j])
                    sign[i][j]='U';

                else sign[i][j]='L';
            }

            cout<<sign[i][j]<<" ";

        }cout<<endl;
    }
    i=m;
    j=n;
     while(i>=0 && j>=0)
     {
         if(sign[i][j]=='U')i--;

         else if(sign[i][j]=='L')j--;

         else if(sign[i][j]=='C')
         {
             i--;
             j--;
             metch+=ctr[i];
         }
         else if(sign[i][j]=='N')break;
     }
    // metch[k]='\0';

    // printf("%s\n",metch);

    reverse(metch.begin(),metch.end());

    cout<<metch<<endl;


     return lcs[m][n];
}
int main()
{
    string str,ctr;

    int n,m;

    cin>>str>>ctr;

    n=str.size();
    m=ctr.size();

   // int k=Lcs(str,n,ctr,m);

   printf("%d\n",Lcs(str,n,ctr,m));

}
