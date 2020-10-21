#include <stdio.h>
#include <string.h>
#include <ctype.h>
int i=-1,p=0,a;
int empty()
{
    if(i==-1)return 1;

    else return 0;
}
void push(char data,char exp[],char op[ ])
{
    if(isdigit(data)==1)
    {
        i++;
        exp[i]=data;
    }
    else operate(data,op,exp);
}
void operate(char data,char op[ ],char exp[ ])
{
    int t;
    if(data=='^' || data=='(')
    {
        p++;
        op[p]=data;
    }
    else if(data=='*' || data=='/')
    {
        t=2;

       while(t--)
       {
           if(op[p]=='*' || op[p]=='/' || op[p]=='^')
         {
            //p--;
            pop(exp,op);
         }
         else break;
       }
       if(data=='*')
       {
           p++;
           op[p]='*';
       }

       else
       {
           p++;
           op[p]='/';
       }
    }
    else if(data=='+' || data=='-')
    {
        t=3;
       while(t--)
       {
           if(op[p]=='*' || op[p]=='/' || op[p]=='^' ||
               op[p]=='+' || op[p]=='-')
           {
               pop(exp,op);
           }
           else break;
       }
       if(data=='+')
       {
           p++;
           op[p]='+';
       }
       else
       {
           p++;
           op[p]='-';

       }
    }
    else if(data==')')
    {
        while(op[p]!='(')
        {
            pop(exp,op);
        }
        p--;
    }
}
void pop(char exp[ ],char op[ ])
{
    if(empty()==0)
    {
       i++;
       exp[i]=op[p];
       p--;
    }
}
int main()
{
     char str[100],op[100],exp[100];
     int k;
     char x;

     op[0]='(';

     scanf("%s",str);

     a=strlen(str);

     str[a]=')';
     str[a+1]='\0';
     a=a+1;
     for(k=0; k<a; k++)
     {
         x=str[k];
         push(x,exp,op);
     }
     exp[i+1]='\0';



     printf("\n\n%s\n",exp);

}
