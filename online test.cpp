/*problem link-click here

In this problem it's easy to get TLE while using general approach. here you have to follow one rule which is

       1. The total number of divisors of a number is just doubled of divisors till the square root of that number though there's some special case which is if the square root of given number is an integer then the total number of divisors is 2*number of divisors till sqrt(number) -1 otherwise 2*number of divisors till sqrt(number).

for example let a given number is 6 then sqrt(6) = 2.4494 . here 1 and 2 (2 divisors till sqrt(6)) is the divisors till 2.4494(sqrt(6)) and the square root is not an integer(2.4494) so total number of divisors is 2*2=4.

again, let a given number is 25 then sqrt(25) = 5 . here 1 and 5 (2 divisors till sqrt(25)) is the divisors till 5(sqrt(25)) and the square root is an integer(5) so total number of divisors is 2*2-1=3.
similarly you will have to find each number's total number of divisors. then output the number which has largest divisors.

an accepted code is given below:
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,l,u;

    scanf("%d",&t);

    while(t--)
    {
        int num,s=0;

        scanf("%d%d",&l,&u);

        for(int i=l;i<=u;i++)
        {
            int c=0;

            for(int j=1;j<=sqrt(i);j++)
            {
                if(i%j==0)
                {
                    c++;

                }
            }

            int tmp=sqrt(i);

            if(tmp==sqrt(i))
            {
                c=c*2-1;
            }
            else
            {
                c=c*2;
            }

            if(c>s)
            {
                s=c;
                num=i;
            }
        }

        printf("Between %d and %d, %d has a maximum of %d divisors.\n",l,u,num,s);
    }

    return 0;
}
