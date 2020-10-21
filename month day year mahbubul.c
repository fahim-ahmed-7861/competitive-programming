#include<stdio.h>
int main()
{
    int d,m,i,y;

    char str[50];

    scanf(" %[^\n]",str);

    for(i=1; i<strlen(str); i++)
    {

        if(i==1)
        {
            if(str[i+1]=='/')d=((str[i-1]-48)*10)+str[i]-48;

            else d=str[0]-48;
        }

        else if(i==3 && str[4]=='/')m=str[i]-48;




      else if(i==3 && str[4]!='/')m=((str[i]-48)*10)+str[i+1]-48;

      else if(i>=5)
      {
          y=((str[++i]-48)*1000)+((str[++i]-48)*100)+((str[++i]-48)*10)+str[++i]-48;
          break;
      }

       // else if(i=3)
    }
    printf("%Day:%d Month:%d Year:%d\n",d,m,y);
}
