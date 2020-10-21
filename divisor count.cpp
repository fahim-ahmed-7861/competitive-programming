// C implementation of Naive method to count all
// divisors
#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));

// function to count the divisors
int countDivisors(int n)
{
    int cnt = 0;
    for (int i=1; i<=sqrt(n); i++)
    {
         if (n%i==0)
         {
            if (n/i == i)
               cnt++;

            else // Otherwise count both
                cnt = cnt+2;
         }
     }
    return cnt;
}

/* Driver program to test above function */
int main()
{
   fastread();

           int sum;

           cin>>sum;
            sum=countDivisors(sum);

            cout<<sum-1<<endl;

            // printf("Total distinct divisors of 100 are : %d",sum);
    return 0;
}
