#include<stdio.h>
int str_cmpare(int n,int p)
{

    if(n>p) return 1;

    else if(n<p) return -1;

    else return 0;

}
int main()
{
    int i,n=0,p=0;
    char str1[500],str2[500];
    scanf(" %[^\n] %[^\n]",str1,str2);



    for(i=0; str1[i]!=0; i++)
    {
        n+=str1[i];
    }

    for(i=0; str2[i]!=0; i++)
    {
        p+=str2[i];
    }

    printf("%d\n",str_cmpare(n,p));


}

