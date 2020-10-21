#include<bits/stdc++.h>
using namespace std;

int i=-1,p=0,a;
char str[10000];
char op[1000];
char ex[1000];
int pop( )
{
    i++;
    ex[i]=op[p];
    p--;
}
void push(char data)
{
   // int t;
  // cout<<data<<endl;
    if(data>='A' && data<='Z' || data>='a' && data<='z' || data>='0' && data<='9')
    {
        i++;
        ex[i]=data;
    }
    else
    {
        if(data=='^' || data=='(')
        {
            op[++p]=data;
        }
        else if(data=='*' || data=='/')
        {


            while(op[p]=='^' || op[p]=='*' || op[p]=='/' && op[p]!='(')
            {

                pop();

            }
            op[++p]=data;
        }
        else if(data=='+' || data=='-')
        {

            while(op[p]!='>' && op[p]!='<' && op[p]!='=' && op[p]!='#' && op[p]!='.' && op[p]!='|' && op[p]!='(')
            {
                pop( );
            }
            op[++p]=data;
        }
        else if(data=='>' || data=='<' || data=='=' || data=='#')
        {
             while(op[p]!='.' && op[p]!='|' && op[p]!='(')
            {
                pop( );
            }

            op[++p]=data;

        }
        else if(data=='.')
        {

            while(op[p]!='(' && op[p]!='|')
            {
                pop( );
            }
           op[++p]=data;
        }
        else if(data=='|')
        {

            while(op[p]!='(')
            {
                pop( );
            }
           op[++p]=data;
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


int main()
{

    int k,a,c=0,L=0,S=0,E=0,se;
    char x;

     while(scanf(" %[^\n]",str)==1)
    {
        se=0;
        S=0;
        E=0;
        L=0;
        i=-1,p=0;
    op[0]='(';
    a=strlen(str);

    for(k=0; k<a; k++)
    {
        if(str[k]>='A' && str[k]<='Z' || str[k]>='a' && str[k]<='z' || str[k]>='0' && str[k]<='9'
        || str[k]=='>' || str[k]=='<' || str[k]=='=' || str[k]=='#' || str[k]=='.' || str[k]=='|' || str[k]=='('
          || str[k]==')' ||   str[k]=='^' || str[k]=='*' || str[k]=='/' || str[k]=='+' || str[k]=='-' )
          {
              if(str[k]=='(')S++;

              else if(str[k]==')')E++;


              else if( (str[k+1]>='A' && str[k+1]<='Z' || str[k+1]>='a' && str[k+1]<='z' || str[k+1]>='0' && str[k+1]<='9')
                && (str[k]>='A' && str[k]<='Z' || str[k]>='a' && str[k]<='z' || str[k]>='0' && str[k]<='9'))
            {
                se=1;
            }

            else if( (str[k]=='>' || str[k]=='<' || str[k]=='=' || str[k]=='#' || str[k]=='.' || str[k]=='|' ||   str[k]=='^' || str[k]=='*' || str[k]=='/' || str[k]=='+' || str[k]=='-')

                && (str[k+1]=='>' || str[k+1]=='<' || str[k+1]=='=' || str[k+1]=='#' || str[k+1]=='.' || str[k+1]=='|' ||   str[k+1]=='^' || str[k+1]=='*' || str[k+1]=='/' || str[k+1]=='+' || str[k+1]=='-' ))se=1;
        }
        else
        {
            L=1;
            break;
        }

    }
    if(L==1)printf("Lexical Error!\n");

    else if(S!=E || se==1)printf("Syntax Error!\n");

    else
    {

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
    }


    return 0;

}





