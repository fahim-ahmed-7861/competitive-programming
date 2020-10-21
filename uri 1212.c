#include<stdio.h>
#include<string.h>
int main()
{
    char str[50],ch[50];
    int i,j,n,m,sum,carry;

    while(scanf("%s %s",str,ch)==2)
    {
        carry=0;

    n=strlen(str);
    m=strlen(ch);

    if(n==1 && m==1 && str[0]=='0' && ch[0]=='0')break;

     if(n>m)
     {
    for(i=n,j=m; i>=0 || j>=0; j--,i--)
    {
        if(j<0)sum=str[i]-'0';

        else sum=str[i]+ch[j]-'0'-'0';

        if(sum>=10)
        {
            carry++;

            if(i-1!=-1)
            str[i-1]=str[i-1]+'1'-48;


        }

    }
     }
    else
     {
    for(i=n,j=m; i>=0 || j>=0; j--,i--)
    {
          if(i<0)sum=ch[j]-'0';

       else  sum=str[i]+ch[j]-'0'-'0';



        if(sum>=10)
        {
            carry++;

            if(j-1!=-1)
            ch[j-1]=ch[j-1]+'1'-48;


        }

    }
     }
    if(carry==0)printf("No carry operation.\n");

      else if(carry==1)printf("1 carry operation.\n");

    else printf("%d carry operations.\n",carry);
    }
    return 0;

}
