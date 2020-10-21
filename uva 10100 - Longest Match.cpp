#include<bits/stdc++.h>
using namespace std;
#define ischar(x) (('a' <= x && x <= 'z') || ('A' <= x && x <= 'Z'))
#define isdigit(x) ('0' <= x && x <= '9')
int lcs(string str[],int m,string ctr[],int n)
{
     int i,j;

     int Lcs[m+5][n+5];


     for(i=0; i<=m; i++)
     {
         for(j=0; j<=n; j++)
         {
             if(i==0 || j==0)

                 Lcs[i][j]=0;

             else if(str[i-1]==ctr[j-1])

                 Lcs[i][j]=Lcs[i-1][j-1]+1;

             else

                Lcs[i][j]=max(Lcs[i-1][j],Lcs[i][j-1]);
            }
     }

     return Lcs[m][n];
}
int main()
{

    string x,y,z="";

    int i,n,k,h,m,t=0;

    while(getline(cin,x))
    {
        string str[1001],ctr[1001];
        bool p=false;
        getline(cin,y);

        n=x.size();

        z.clear();

        for(i=0,k=0; i<n; i++)
        {
            while(ischar(x[i]) || isdigit(x[i]))
            {
                z+=x[i];
                i++;
                p=true;
            }
            if(p==true)
            {
                str[k++]=z;

                p=false;

            z.clear();
            }

        }
        m=y.size();
        z.clear();
        for(i=0,h=0; i<m; i++)
        {
            while(isalpha(y[i]) || isdigit(y[i]))
            {
                z+=y[i];
                i++;
                p=true;
            }
            if(p==true)
            {
                ctr[h++]=z;

                p=false;

            z.clear();
            }

        }
       if(n==0 || m==0)printf("%2d. Blank!\n", ++t);

       else  printf("%2d. Length of longest match: %d\n", ++t, lcs(str, k,ctr,h));

    }
    return 0;

}
