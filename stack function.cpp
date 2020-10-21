#include<bits/stdc++.h>
#include<stack>
using namespace std;
void printstack(stack <int> s)
{
    stack <int> k = s;
    while (k.empty()==0)
    {
        cout <<k.top()<<" ";
        k.pop();
    }
    cout << '\n';
}
int main()
{

    stack<int>s;

   char ch[50];
    int n,data;
    while(scanf("%s",ch)==1)
    {
        if(!strcmp("push",ch))
        {
            cin>>n;

            s.push(n);

            printstack(s);
        }
        else if(!strcmp("pop",ch))
        {
            if(!s.empty())
            {
                s.pop();
                if(!s.size()) printf("Now stack is empty\n");

                else printstack(s);
            }
            else  printf("stack is empty\n");

        }
        else if(!strcmp("isempty",ch))
        {
            if(!s.empty()) printf("Not empty\n");

            else printf("stack is empty\n");
        }
        else if(!strcmp("top",ch))
        {
            if(!s.empty())
                cout<<s.top()<<endl;

            else printf("stack is empty\n");
        }
         else if(!strcmp("top_",ch))
        {
            if(!s.empty())
               {
                   cin>>n;
                 s.top()=n;
                 s.pop();

                 printstack(s);
               }

            else printf("stack is empty\n");
        }

        else if(!strcmp("size",ch))
        {
            cout<<s.size()<<endl;
        }
        else if(!strcmp("update",ch))
        {
              if(!s.empty())
              {
            cin>>n;

            s.top()=n;
            printstack(s);
              }
               else printf("stack is empty\n");

        }
    }


}
