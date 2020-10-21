#include<stdio.h>
int main()
{

    int n=0;
    while(n<100) {

        n++;
        if(n==7 || n==9 || n==13 || n==50 && n==99) {
            continue;

        }
        printf("%d\n",n);
    }
    return 0;

}
