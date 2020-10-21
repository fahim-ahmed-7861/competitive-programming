#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,T;
    double area,s;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d %d %d",&a,&b,&c);
        if(a+b>c || a+c>b || b+c>a)
        {
            s=(a+b+c)/2;
            s=s*(s-a)*(s-b)*(s-c);
            area=sqrt(s);
            printf("Area = %.3lf\n",area);
        }
    }
    return 0;

}
