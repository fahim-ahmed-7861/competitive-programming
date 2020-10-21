#include <stdio.h>
#include <string.h>
#include<math.h>
int i=-1,p=0,a;
char str[1000];
char op[1000];
char ex[1000];
void push(char data)
{
    if(data>='A' && data<='Z' || data>='a' && data<='z' || data>='0' && data<='9')
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


            while(op[p]!='+' && op[p]!='-' && op[p]!='(')
            {

                pop();

            }
            if(data=='*')
            {


                op[++p]='*';
            }

            else
            {


                op[++p]='/';
            }
        }
        else if(data=='+' || data=='-')
        {

            while(op[p]!='(')
            {
                pop( );
            }
            if(data=='+')
            {


                op[++p]='+';
            }
            else
            {


                op[++p]='-';

            }
        }
        else if(data==')')
        {
            while(op[p]!='(')
            {
                pop( );

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

    int k,a,t;
    char x;
    scanf("%d",&t);

    while(t--)
            {
                i=-1;
                p=0;
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
    ex[i+1]='\0';

    printf("%s\n",ex);
    }
    return 0;

}




