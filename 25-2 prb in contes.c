#include<stdio.h>
int gcd(int a,int b)
{
    int t;
    while(b!=0)
    {
        t=b;
        b=a%b;
        a=t;


    }
    return a;

}
int main()
{
    int T,a,b;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d %d",&a,&b);

        printf("%d %d\n",gcd(a,b),(a*b)/gcd(a,b));
    }
    return 0;
}
