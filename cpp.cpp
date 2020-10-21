#include<bits/stdc++.h>
using namespace std;
int main()
{

     int t,i,n;
     stack<char>s;


    char ch;
    string str;
      scanf("%d%c",&t,&ch);
      while(t--)
      {
         getline(cin, str);

         while(!s.empty())s.pop();

         n=str.size();

          for(i=0; i<str.size(); i++)
          {

            if(str[i]=='(' || str[i]=='[')
                 s.push(str[i]);
             else if(s.empty())
             {
                 s.push('E');
                 break;
             }
             else if (str[i] == ')' && s.top() == '(') {
                s.pop();
            }

            else if (str[i] == ']' && s.top() == '[')
                s.pop();

            else
             {
                 s.push('E');
                 break;
             }
          }

          if(s.size()==0)printf("Yes\n");

          else printf("No\n");

      }
      return 0;
}

