#include<bits/stdc++.h>
using namespace std;
int main()
{
      int t,i,n;
      char str[300];
      scanf("%d",&t);

      while(t--)
      {
          int fo=0,fe=0;

          scanf(" %[^\n]",str);

          n=strlen(str);

          for(i=0; i<n; i++)
          {
              if(str[i]=='(')fo++;

              else if(str[i]==')')fo--;

              else if(str[i]=='[')fe++;

              else if(str[i]==']')fe--;

              if(fo<0 || fe<0)break;
          }
          if(i==n)printf("Yes\n");

          else printf("No\n");
      }
      return 0;
}

