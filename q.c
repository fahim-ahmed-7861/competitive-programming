#include<stdio.h>
#define MAXSIZE 100

int front=0;
int rear=-1;
int qeue[MAXSIZE];
int size=0;

int getsize()
{
    return size;
}
int full()
{
    if(rear==MAXSIZE-1) return 1;
    else return 0;
}

int empty()
{
    if(rear==-1) return 1;
    else return 0;
}

void push(int data)
{
    if(!full())
    {
        rear=rear+1;
        qeue[rear]=data;
        size++;
        printf("Pushed %d\n",data);
    }
    else printf("can not. stack full.\n");
}

int pop()
{
    int data;
    if(!empty())
    {
        data=qeue[front];
        printf("Popped %d\n",data);
        front=front+1;
        rear=rear-1;
        size--;
        return data;
    }
    else printf("can not. qeue empty\n");
}

int gfront()
{
    if(!empty())
    {
        int data = qeue[front];
        printf("front is : %d\n", data);
        return data;
    }
    else printf("Sorry. qeue is empty.\n");
}

int main()
{
    char cmd[50];
    int n;


    while(scanf("%s",cmd)==1)
    {
        if(!strcmp("push",cmd))
        {
            scanf("%d", &n);
            push(n);

        }
        else if(!strcmp("pop",cmd))
        {
            n=pop();
        }
        else if(!strcmp("front",cmd))
        {
            n=gfront();
        }
        else if(!strcmp("isempty",cmd))
        {
            if(!empty())printf("Not empty\n");
            else printf("Empty\n");
        }
        else if(!strcmp("isfull",cmd))
        {
            if(!full())printf("Not full\n");
            else printf("Full\n");
        }
        else if(!strcmp("size",cmd))
        {
            int size=getsize();
            printf("Size is %d\n", size);
        }
    }
    return 0;
}
