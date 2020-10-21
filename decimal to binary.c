#include<stdio.h>
int main()
{
    int num=0,i=0,res,n;
    scanf("%d",&n);


    while(n>0)
    {
        res=n%10;
        num=num+res*pow(2,i);
        n=n/10;
        i++;
    }
    printf("%d",num);
}
