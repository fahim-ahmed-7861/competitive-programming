#include<stdio.h>
int main()
{
    int t;;
    scanf("%d",&t);

    while(t--)
    {
    int i,n,k=1,x;
    scanf("%d",&n);
    for(i=1900; i<n; i++)
    {
          if(i%400==0||(i%4==0&&!(i%100==0)))
               k=k+2;
	        else
	            k++;
    }
       x=k%7;
        if(x==0)printf("sunday\n");

        else if(x==1)printf("monday\n");

        else if(x==2)printf("tuesday\n");

	      else if(x==3)printf("wednesday\n");

         else if(x==4)printf("thursday\n");

        else if(x==5)printf("friday\n");

        else if(x==6)printf("saturday\n");

    }
    return 0;

}
