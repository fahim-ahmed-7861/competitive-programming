#include<stdio.h>
int k=-1;
char ex[1000];
int main()
{
    char str[1000],c;
    int i,n,count;
  xx:  while(scanf("%s",str)==1)
    {
        k=-1;
        count=0;
        for(i=0; str[i]!='\0'; i++)
        {
           if(str[i]==')' && ex[k]!='(')
           {
               printf("incorrect\n");
               goto xx;
           }

            c=str[i];

            push(c);
        }

        if(k!=-1)printf("incorrect\n");

        else printf("correct\n");
    }
}
void push(char data)
{
    if(data=='(')
    {
        k++;
        ex[k]=data;
    }
    else if(data==')')k--;

}

