#include<stdio.h>
#define maxsize 6


int top=-1,count=0,front1=-1;
int stack[maxsize];


int full()
{
    if(top==maxsize) return 1;
    else return 0;
}

int empty()
{
    if(front1>top) return 1;
    else return 0;
}

void push(int data)
{
    if(!full())
    {


         top=top+1;

        stack[top]=data;



        printf("Pushed %d\n",data);
    }
    else printf("can not. stack full.\n");
}

int pop()
{
    int data;
    //if(!empty())

    if(front1<=top)
    {
        front1++;
        data=stack[front1];
        printf("Popped %d\n",data);
        front1++;
        top--;
       // top=top-1;
        return data;
    }
    else printf("can not. stack empty\n");
}

void front()
{
    if(!empty()) printf("front is : %d\n",stack[front1]);


    else printf("Sorry. stack empty.\n");
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
            pop();
        }
        else if(!strcmp("front",cmd))
        {
            front();
        }
        else if(!strcmp("isempty",cmd))
        {
            if(front1<=top) printf("Not empty\n");
            else printf("Empty\n");
        }
        else if(!strcmp("isfull",cmd))
        {
            if(!full())printf("Not full\n");
            else printf("Full\n");
        }
    }
    return 0;
}
