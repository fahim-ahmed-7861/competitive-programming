#include<bits/stdc++.h>
using namespace std;

void substring(char str[],int n)
{
    int i,p,j,k,len;

    for(i=1; i<=n; i++)
    {

        for(j=0; j<=n-i; j++)
        {
             len=i+j-1;

            for(k=j; k<=len; k++)
           {
               cout<<str[k];
           }

           cout<<endl;
        }
    }

}
int main()
{
    char str[]="ABCD";

    substring(str, strlen(str));
}
