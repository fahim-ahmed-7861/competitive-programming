#include<stdio.h>
int main()
{
  int cnt=0;
    for(int i=1;i<=100;i++)
    {
       if(i%3==0 && i%5==0)cnt++;
    }

   printf("%d\n",cnt);
    return 0;
}
