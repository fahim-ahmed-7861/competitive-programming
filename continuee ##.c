#include <stdio.h>
int main()
{
    int n=0;

    for( ;n<100; ) {
        n=n+1;


        if(n==33 || n==22) {

            continue;
        }

        printf("%d\n",n);

    }
    return 0;
}
