#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include<math.h>
int i=-1,p=0;
char str[10001];
char op[10001];
char ex[10001];
void pop( )
{
    i++;
    ex[i++]=' ';
    ex[i]=op[p];
    p--;
}
void push(char data)
{
   // int t;
    if(isdigit(data))
    {
        i++;
        ex[i]=data;

    }
    else
    {
        ex[++i]=' ';
        if(data=='|' || data=='(')
        {
            p++;
            op[p]=data;
        }


        else if(data=='-')
        {

            while(op[p]!='(')
            {
                pop( );
            }


                p++;
                op[p]=' ';
                op[++p]='-';


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


void evaluate( )
{
    double sum=0,ara[1000],sume;
    int i,j,a,g,c=0;
    char pe[100];
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

             if(ex[i]=='-')
            {
                ara[c-2]=ara[c-2]+ara[c-1];
                c-=1;
            }

            else if(ex[i]=='|')
            {
                ara[c-2]=(ara[c-2]*ara[c-1])/(ara[c-2]+ara[c-1]);
                c-=1;
            }



        }

    }
    printf("%.3lf\n",ara[0]);

}
int main()
{

    int k,a;
    double ara[1000];
    char x,h,pe[100];

     while(scanf("%s",str)==1){
            i=-1,p=0;
    op[0]='(';


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

    evaluate( );

     }
    return 0;

}
