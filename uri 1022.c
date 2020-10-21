#include<stdio.h>
int gcd(int a, int b)
{
	if(a<0)
		a = -a;
	if(b<0)
		b = -b;
	if(a%b == 0)
		return b;
	else
		return gcd(b,a%b);
}
int main()
{
    int n1,n2,d1,d2,t,num,den,div;

    char ch;

    scanf("%d",&t);

    while(t--)
    {
    scanf("%d / %d %c %d / %d", &n1, &d1, &ch, &n2, &d2);


        if(ch=='+')
        {
             num=(n1*d2 + n2*d1);
              den=(d1*d2);
        }
        else if(ch=='-')
        {
             num=(n1*d2 - n2*d1);

              den=(d1*d2);
        }
        else if(ch=='*')
        {
            num=(n1*n2);
            den=(d1*d2);
        }
        else if(ch=='/')
        {
            num=(n1*d2);
            den=(n2*d1);
        }
        div=gcd(num,den);
        printf("%d\n",div);

        printf("%d/%d = %d/%d\n",num,den,num/div,den/div);
    }
    return 0;
}
