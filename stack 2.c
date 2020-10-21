#include<stdio.h>
#define maxsize 1

int top=-1,count=0;
int stack[maxsize];

int empty()
{
    if(top==-1)return 1;

    else return 0;
}
int full()
{
    if(top==maxsize) return 1;

    else return 0;
}
void push(int data)
{
    if(!full())
    {
        top=top+1;
        count++;

       stack[top]=data;
        printf("pushed data %d\n",data);
    }
    else printf("Cannot push Stack is Full\n");
}
void pop()
{
    if(!empty())
    {
        printf("popped data %d\n",stack[top]);
        top=top-1;
        count--;

    }
    else printf("cannot,stack is Empty\n");
}
void getTop()
{
    if(!empty()) printf("Top is %d\n",stack[top]);

    else printf("Sorry,stack is empty\n");
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
            if(!empty()) printf("Not empty\n");

            else printf("Stack is empty\n");
          }
    else if(!strcmp("isfull",ch))
          {
            if(!full()) printf("Not Full\n");

            else printf("FULL\n");
          }
    else if(!strcmp("top",ch))
          {
            getTop();
          }

    else if(!strcmp("size",ch))
          {
            printf("Size=%d\n",count);
          }
   }
}
