
// Program to print all prime factors
# include <stdio.h>
# include <math.h>

int cnt=0;
// A function to print all prime factors of a given number n
void primeFactors(int n)
{
    // Print the number of 2s that divide n  while (n%2 == 0)
    while(n%2==0){
          printf("%d ", 2);
        n = n/2;
        cnt=1;
    }
  // printf("%d",n);

    // n must be odd at this point.  So we can skip
    // one element (Note i = i +2)
    for (int i = 3; i <= sqrt(n); i = i+2)
    {
        // While i divides n, print i and divide n
        if(n%i==0)
        {
            cnt++;
            while (n%i == 0)
            {
                printf("%d ", i);
                n = n/i;
            }
        }
    }

    // This condition is to handle the case when n
    // is a prime number greater than 2
    if (n > 2)
        printf ("%d ", n);
     //   cnt++;
}

/* Driver program to test above function */
int main()
{
    int n;
    int knt=0;

    //for(n=1; n<=100; n++){

    cnt=0;

    scanf("%d",&n);

    primeFactors(n);

//    return 0;
}
