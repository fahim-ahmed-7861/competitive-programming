#include<stdio.h>
#include<string.h>

void sort(char str[],int n)
{

    int i,j;

    char temp;

    for(i=1; i<n; i++)
    {
        for(j=0; j<n-i;j++)
        {
           if(str[j]>str[j+1])
           {
               temp=str[j];

               str[j]=str[j+1];

               str[j+1]=temp;
           }
        }
    }
}
int main()
{

   char str[102],num[102];

   scanf("%s",str);

   int i,n=strlen(str),j=0;

  for(i=0; i<n; i+=2,j++)
  {
     num[j]=str[i];


  }
   num[j]='\0';


   sort(num,j);

  for(i=0; i<j; i++)
  {
      printf("%c",num[i]);

      if(i<j-1)printf("+");
  }




}
