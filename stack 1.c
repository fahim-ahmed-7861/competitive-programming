#include<stdio.h>
#define maxsize 3


int top=-1,count=0;
int stack[maxsize];


int full()
{
    if(top==maxsize-1) return 1;
    else return 0;
}

int empty()
{
    if(top==-1) return 1;
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
    if(!empty())
    {
        data=stack[top];
        printf("Popped %d\n",data);
        top=top-1;
        return data;
    }
    else printf("can not. stack empty\n");
}

void getop()
{
    if(!empty()) printf("top is : %d\n",stack[top]);


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
        else if(!strcmp("top",cmd))
        {
            getop();
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
    }
    return 0;
}
