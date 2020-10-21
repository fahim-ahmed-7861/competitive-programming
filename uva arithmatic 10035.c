#include<stdio.h>
#include<string.h>
int main()
{

    int n,m,sum,i,j,carry,temp,h=0;
    char str[15],ch[15];
    while(scanf("%s %s",str,ch)==2)
    {
        n=strlen(str);
        m=strlen(ch);
        carry=0;
        h=0;
        if(str[0]=='0' && n==1 && m==1 && ch[0]=='0')break;
        i=n-1;
        j=m-1;
          while(i!=-1  && j!=-1)
        {
            sum=(str[i]+ch[j])-96;
            if(h==1)
            {
                sum+=h;
                h=0;
            }

            if(sum>=10)
            {
                carry++;

                h=1;

            }

            i--;
            j--;
        }
        if(carry==0)printf("No carry operation.\n");

        else
        {  if(carry==1) printf("%d carry operation.\n",carry);

           else printf("%d carry operations.\n",carry);
        }
    }
    return 0;
}
