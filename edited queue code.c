#include<stdio.h>
#include<string.h>
#define maxsize 100

int queue[maxsize];
int size=0,front=0,rear=-1;

int getsize()
{
    return size;
}
int full()
{
    if(rear==maxsize-1)return 1;

    else return 0;
}
int empty()
{
    if(rear==-1 || front>rear)return 1;

    else return 0;
}
void push(int data)
{
    if(!full())
    {
        rear++;
        queue[rear]=data;
        size++;
        printf("Pushed data %d\n",data);

    }
    else printf("Cannot queue is full\n");

}
void pop()
{
    if(!empty())
    {
        printf("Poped data:%d\n",queue[front]);
        front++;
        size--;
    }
    else printf("Cannot queue is empty\n");
}
void getfront()
{
    if(!empty())
    {
        printf("Front :%d\n",queue[front]);
    }
    else printf("sorry! queue is empty\n");
}
int main()
{
    char ch[50];
    int n;

    while(scanf("%s",ch)==1)
    {
        if(!strcmp("push",ch))
           {
               scanf("%d",&n);
               push(n);
           }
        else if(!strcmp("pop",ch))
            {
                pop();
            }
     else if(!strcmp("isempty",ch))
            {
                if(!empty())printf("Not empty\n");

                 else printf("Empty\n");
            }
        else if(!strcmp("isfull",ch))
            {
                if(!full())printf("Not Full\n");

                 else printf("Full\n");
            }
          else if(!strcmp("front",ch))
            {
                getfront();
            }
        else if(!strcmp("size",ch))
        {
            printf("Size : %d\n",getsize());
        }
    }
    return 0;

}
