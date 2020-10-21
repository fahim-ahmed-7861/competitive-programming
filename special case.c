#include<stdio.h>
int main()
{
    typedef struct
    {
        char name[100],mark1[100],mark2[100],mark3[100],clas[100];
      //  char clas[100];
        //float cgpa;
    }student;

    student std[1000],temp;
    int i,j,n,p=0,count=0,h,k;
    printf("How many student: ");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
         printf("Enter name:\n");
       scanf(" %[^\n]",std[i].name);
        for(j=p; count<3; j++)
        {
       printf("which class:\n");
       scanf("%s",std[j].clas);
       printf("1st term result:\n");
       scanf("%s",std[j].mark1);
        printf("2nd term result:\n");
       scanf("%s",std[j].mark2);
       printf("Final term result:\n");
       scanf("%s",std[j].mark3);
       printf("%d\n",j);
       count++;
        }
        count=0;
        p=j;
    }
     p=2;
     for(i=2,k=0; i<n*3 && k<n; k++,i+=3)
    {

        //if(std[p].clas==8)
    // for(k=0; k<n*; k++)
         for(h=k+1,j=i+3 && h<n;j<n*3; j+=3,h++)
       {
        if(std[i].mark3<std[j].mark3)
        {
        temp=std[k];
        std[k]=std[h];
        std[h]=temp;
        }}

       p=p-3;

    }

    p=0;
    count=0;
    printf("\n\nOutput\n\n");
    for(i=0; i<n; i++)
    {   printf("Name:%s\n",std[i].name);
        printf("Class\t1st term\t2nd term\tFinal\n");
        for(j=p; count<3; j++)
        {
          printf("%s\t  %s\t\t  %s\t\t  %s\n",std[j].clas,std[j].mark1,std[j].mark2,std[j].mark3);
          count++;
        }
        count=0;
        p=j;
    }

    return 0;

}
