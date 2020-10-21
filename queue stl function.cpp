#include<bits/stdc++.h>
#include<queue>
using namespace std;
void printqueue(queue <int> s)
{
    queue <int> k = s;
    while (k.empty()==0)
    {
        cout <<k.front()<<" ";
        k.pop();
    }
    cout << '\n';
}
int main()
{



    queue<int>q;

    char ch[50];
    int n,data;


    while(scanf("%s",ch)==1)
    {
        if(!strcmp("push",ch))
        {
            cin>>n;

            q.push(n);

            printqueue(q);
        }
        else if(!strcmp("pop",ch))
        {
            if(!q.empty())
            {
                q.pop();
                if(!q.size()) printf("queue is empty\n");

                else printqueue(q);
            }
            else  printf("queue is empty\n");

        }
        else if(!strcmp("isempty",ch))
        {
            if(!q.empty()) printf("Not empty\n");

            else printf("queue is empty\n");
        }
        else if(!strcmp("top",ch))
        {
            if(!q.empty())
                cout<<q.front()<<endl;

            else printf("queue is empty\n");
        }
        else if(!strcmp("rear",ch))
        {
            if(!q.empty())
                cout<<q.back()<<endl;

            else printf("queu is empty\n");
        }

        else if(!strcmp("size",ch))
        {
            cout<<q.size()<<endl;
        }
          else if(!strcmp("back",ch))
         {

              if(!q.empty())
              {
            cin>>n;
              q.back()=n;
            printqueue(q);
              }
             else  cout<<"queue is empty\n"<<endl;
        }

            else if(!strcmp("front",ch))
            {
              if(!q.empty())
              {
               cin>>n;

               q.front()=n;
               printqueue(q);
              }
             else  cout<<"queue is empty\n"<<endl;
            }

    }

    return 0;
}

