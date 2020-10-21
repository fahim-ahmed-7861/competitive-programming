#include<stdio.h>
int main()
{

    int A,B,C;

    scanf("%d %d %d",&A,&B,&C);

    if(A>=B && A<=C)
    {
        printf("chocolate");
    }
    if(A<B && A<C)
    {
        printf("chocolate");
    }
    else
    {
        printf("which in his budget");
    }
    return 0;

}
