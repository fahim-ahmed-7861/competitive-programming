#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include<math.h>
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
void pop( )
{
    i++;
    ex[i]=op[p];
    p--;
}
int main()
{

    int k,j,a,g,c=0,sume;
    double sum=0,ara[1000];
    char x,h,pe[100];


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

    for(i=0; ex[i]!='\0'; i++)
    {
        j=i;

        if(isdigit(ex[i])==1)
        {
            for(i=j,a=0; ex[i]!='\0'; i++,a++)
            {
                if(isdigit(ex[i])==1 && ex[i]!=' ')pe[a]=ex[i];

                else break;
            }

            sum=0.0;
            for(a=a-1,g=0; a>=0; a--,g++)
            {
                sum+=(pe[a]-48)*pow(10,g);

            }
            ara[c++]=sum;

            i--;

        }
        else if(ex[i]!=' ')
        {
            if(ex[i]=='+')
            {
              ara[c-2]=ara[c-2]+ara[c-1];
              c-=1;
            }
            else if(ex[i]=='-')
            {
              ara[c-2]=ara[c-2]-ara[c-1];
              c-=1;
            }
            else if(ex[i]=='*')
            {
              ara[c-2]=ara[c-2]*ara[c-1];
              c-=1;
            }
            else if(ex[i]=='/')
            {
              ara[c-2]=ara[c-2]/ara[c-1];
              c-=1;
            }
            else if(ex[i]=='^')
            {
              ara[c-2]=pow(ara[c-2],ara[c-1]);
              c-=1;
            }


        }

    }
     printf("%.2lf\n",ara[0]);




    return 0;

}
