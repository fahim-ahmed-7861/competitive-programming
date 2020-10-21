#include<stdio.h>
#include<ctype.h>
char str[1000],ex[1000],op[1000];
int p=-1,a=0;
void push(char data)
{
     if(isdigit(data)==1 || data==' ')
     {
         ex[++p]=data;
     }
     else
     {
         if(data=='^' || data=='(')
         {
             op[++a]=data;
         }
         else if(data=='*' || data=='/')
         {
             while(op[a]!='+' && op[a]!='-' && op[a]!='(')
             {
                 pop();
             }
             if(data=='*')op[++a]='*';

             else op[++a]='/';

         }
         else if(data=='+' || data=='-')
         {
             while(op[a]!='(')
             {
                 pop();
             }
              if(data=='+')op[++a]='+';

             else op[++a]='-';
         }
         else if(data==')')
         {
             while(op[a]!='(')
             {
                 pop();
             }
              a--;
         }

     }

}
void pop()
{
    ex[++p]=' ';
    ex[++p]=op[a];
    a--;
}
void evaluate()
{
    double ara[1000],sum=0.0;
    char data[100];
    int i,k,g,c=-1,j,total=0;

    for(i=0; ex[i]!='\0'; i++)
    {
        j=i;

        if(isdigit(ex[i])==1)
        {
            for(i=j,k=0; ex[i]!='\0'; i++,k++)
            {
                  if(isdigit(ex[i])==1)data[k]=ex[i]-'0';

                  else break;
            }
            sum=0.0;
            g=0;

           for(k=k-1; k>=0; k--)
           {


                sum+=data[k]*pow(10,g);
                g++;

            }
            ara[++c]=sum;


            i--;
         }
        else if(ex[i]!=' ')
        {
            if(ex[i]=='+')
            {
                ara[c-1]=ara[c-1]+ara[c];
               c-=1;

            }
            else if(ex[i]=='-')
            {
                ara[c-1]=ara[c-1]-ara[c];
                c-=1;

            }
             else if(ex[i]=='*')
            {
                ara[c-1]=ara[c-1]*ara[c];
                c-=1;

            }
             else if(ex[i]=='/')
            {
                ara[c-1]=ara[c-1]/ara[c];
                c-=1;

            }
              else if(ex[i]=='^')
            {
                ara[c-1]=pow(ara[c-1],ara[c]);
                c-=1;

            }
        }

    }
    printf("%.2lf",ara[0]);

}
int main()
{
    char data;
    int i,j,n;
    scanf(" %[^\n]",str);
    op[0]='(';
    n=strlen(str);
    str[n]=')';
    str[n+1]='\0';
    for(i=0; str[i]!='\0'; i++)
    {
        data=str[i];
        push(data);

    }
    ex[++p]='\0';

    evaluate();

    printf("\n%s",ex);

    return 0;
}
