#include<stdio.h>
int main()
{
    int a,b,temp;

    scanf("%d %d",&a,&b);

    //int c=b%a;
      if(a < b){
         temp = a;
         a = b;
         b = temp;
    }


       if(a%b==0)printf("Sao Multiplos\n");
        else
         printf("Nao sao Multiplos\n");




    return 0;
}
