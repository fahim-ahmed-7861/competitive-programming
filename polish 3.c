#include <stdio.h>
#include <string.h>
#include <ctype.h>
int i=-1,p=0,a;
char str[100];
char op[100];
char ex[100];
void push(char data,char h)
{
    int t;
    if(isdigit(data)==1 || data==' ' && isdigit(h)==1)
    {
        i++;
        ex[i]=data;
    }
    else
    {
        if(data=='^' || data=='(')
        {
            p++;
            op[p]=data;
        }
        else if(data=='*' || data=='/')
        {
            t=2;

            while(op[p]!='+' && op[p]!='-' && op[p]!='(')
            {

                pop();

            }
            if(data=='*')
            {
                p++;
                op[p]=' ';
                op[++p]='*';
            }

            else
            {
                p++;
                 op[p]=' ';
                op[++p]='/';
            }
        }
        else if(data=='+' || data=='-')
        {
            t=3;
            while(op[p]!='(')
            {
                pop( );
            }
            if(data=='+')
            {
                p++;
                 op[p]=' ';
                op[++p]='+';
            }
            else
            {
                p++;
                 op[p]=' ';
                op[++p]='-';

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
}
int pop( )
{
    i++;
    ex[i]=op[p];
    p--;
}
int main()
{

    int k;
    char x,h;


    op[0]='(';

    scanf(" %[^\n]",str);

    a=strlen(str);

    str[a]=')';
    str[a+1]='\0';
    a=a+1;
    for(k=0; k<a; k++)
    {
        x=str[k];
        h=str[k+1];

        push(x,h);
    }
    ex[i+1]='\0';

    printf("\n\n%s\n",ex);

    return 0;

}
