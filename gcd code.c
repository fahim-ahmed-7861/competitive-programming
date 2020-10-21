
#include<stdio.h>
int gcd(int a,int b)
{
    while(1)
    {
        if(a%b==0)
            return b;

        return (b,a%b);
    }
}
int main()
{
    int a,b,c,d;
    //scanf("%d %d %d %d",&a,&b,&c,&d);

    scanf("%d %d",&a,&b);

    printf("%d\n",gcd(a,b));

    //printf("%d\n",(a*b)/gcd(a,b));



    //printf("%d",gcd(d,gcd(c,gcd(a,b))));


}
