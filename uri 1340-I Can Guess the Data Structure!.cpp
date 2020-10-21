#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m;

    while(scanf("%d",&t)==1)
    {
        queue<int>q;
        stack<int>s;
        priority_queue<int>p;

        bool queue_p=true,stack_p=true,priority_p=true;

        while(t--)
        {
            scanf("%d %d",&n,&m);
            switch(n)
            {
            case 1:
                if(queue_p)
                    q.push(m);

                if(stack_p)
                    s.push(m);

                if(priority_p)
                    p.push(m);
               break;

            case 2:

                if(queue_p)
                {
                if(!q.empty() && q.front()==m)
                    q.pop();
                else
                    queue_p=false;
                }
                if(stack_p)
                {
                if(!s.empty() && s.top()==m)
                    s.pop();
                else
                    stack_p=false;
                }
                if(priority_p)
                {
                if(!p.empty() && p.top()==m)
                    p.pop();
                else
                    priority_p=false;
                }
                break;
            }

        }

        if((queue_p && stack_p)|| (queue_p && priority_p)|| (priority_p && stack_p))
               printf("not sure\n");

        else if(!queue_p && !stack_p && !priority_p)
              printf("impossible\n");

        else if(queue_p)printf("queue\n");

        else if(stack_p)printf("stack\n");

        else printf("priority queue\n");


    }
      return 0;
}
