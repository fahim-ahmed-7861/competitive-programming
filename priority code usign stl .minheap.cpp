#include<bits/stdc++.h>
using namespace std;
priority_queue <int, vector<int>, greater<int> > minheap;
priority_queue <int, vector<int>, greater<int> > k;
void printpqueue( priority_queue <int, vector<int>, greater<int> > s)
{

   k=s;
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

            minheap.push(n);

            printpqueue(minheap);
        }
        else if(!strcmp("pop",ch))
        {
            if(!minheap.empty())
            {
                minheap.pop();
                if(!minheap.size()) printf("queue is empty\n");

                else printpqueue(minheap);
            }
            else  printf("queue is empty\n");

        }
        else if(!strcmp("isempty",ch))
        {
            if(!minheap.empty()) printf("Not empty\n");

            else printf("queue is empty\n");
        }
        else if(!strcmp("top",ch))
        {
            if(!minheap.empty())
                cout<<minheap.top()<<endl;

            else printf("queue is empty\n");
        }

        else if(!strcmp("size",ch))
        {
            cout<<minheap.size()<<endl;
        }

    }
    return 0;
}
