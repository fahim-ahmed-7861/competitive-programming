#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    int t,i=1,n,m,y,count,d1,d2,h,l,p,k,x;
    double sum;
    char str[100],ch[100],str2[15],ch2[15];
    scanf("%d",&t);
    while(t--)
    {
        count=0;
        sum=0.0;
        scanf(" %[^\n]",str);
        scanf(" %[^\n]",ch);

        n=strlen(str);
        m=strlen(ch);

        for(y=n-1,x=0; str[y]!=' '; y--,x++)
        {
            sum+=(str[y]-48)*pow(10,x);
        }
        p=sum;

        sum=0;

        for(y=m-1,x=0; ch[y]!=' '; y--,x++)
        {
            sum+=(ch[y]-48)*pow(10,x);
        }
        k=sum;

        for(y=p+1; y<k; y++)
        {
            if(y%400==0 || y%100!=0 && y%4==0)
            {
                count++;
                y=y+3;
            }

        }
        for(y=0; str[y]!=' '; y++)
        {
            str2[y]=str[y];
        }
        d1=((str[y+1]-48)*10)+str[y+2]-48;
        str2[y]='\0';
        for(y=0; ch[y]!=' '; y++)
        {
            ch2[y]=ch[y];
        }
         d2=((ch[y+1]-48)*10)+ch[y+2]-48;
        ch2[y]='\0';
        if(str[0]=='J')y=strcmp("January",str2);
        else y=strcmp("February",str2);

        if((ch[0]=='J' && ch[1]=='a'))
        {
            h=strcmp("January",ch2);

        }
        else
        {
            h=strcmp("February",ch2);
            l=strcmp("February",ch2);
        }

        if(p%400==0 || p%100!=0 && p%4==0)
        {
            if(y==0 && d1<30 && k!=p)count++;
        }
        if(k%400==0 || k%100!=0 && k%4==0)
        {
            if(h!=0 || d2==29 && l==0)count++;


        }

        printf("Case %d: %d\n",i++,count);

    }
    return 0;
}
