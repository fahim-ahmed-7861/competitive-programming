
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int i=-1,p=0,a;
char str[100];
char op[100];
char exp[100];

int empty()
{
    if(i==-1)return 1;

    else return 0;
}
void push(char data)
{
    if(isdigit(data)==1 || data==' ')
    {
        i++;
        exp[i]=data;
    }
    else operate(data);
}
void operate(char data)
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
            pop();
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
               pop( );
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
            pop();
        }
        p--;
    }
}
void pop( )
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

     int k;
     char x;
     //char exp[100];

     op[0]='(';

     scanf(" %[^\n]",str);

     a=strlen(str);

     str[a]=')';
     str[a+1]='\0';
     a=a+1;
     for(k=0; k<a; k++)
     {
         x=str[k];

         push(x);
     }
     exp[i+1]='\0';



     printf("\n\n%s\n",exp);

}
