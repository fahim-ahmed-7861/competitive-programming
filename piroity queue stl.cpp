#include<bits/stdc++.h>
using namespace std;
priority_queue<int>maxheap;
priority_queue<int> k;
void printpqueue( priority_queue<int> s)
{
      k = s;
    while (k.empty()==0)
    {
        cout <<k.top()<<" ";
        k.pop();
    }
    cout << '\n';
}
int main()
{

    char ch[50];
    int n,data;


    while(scanf("%s",ch)==1)
    {
        if(!strcmp("push",ch))
        {
            cin>>n;

            maxheap.push(n);

            printpqueue(maxheap);
        }
        else if(!strcmp("pop",ch))
        {
            if(!maxheap.empty())
            {
                maxheap.pop();
                if(!maxheap.size()) printf("queue is empty\n");

                else printpqueue(maxheap);
            }
            else  printf("queue is empty\n");

        }
        else if(!strcmp("isempty",ch))
        {
            if(!maxheap.empty()) printf("Not empty\n");

            else printf("queue is empty\n");
        }
        else if(!strcmp("top",ch))
        {
            if(!maxheap.empty())
                cout<<maxheap.top()<<endl;

            else printf("queue is empty\n");
        }

        else if(!strcmp("size",ch))
        {
            cout<<maxheap.size()<<endl;
        }

    }
    return 0;
}
