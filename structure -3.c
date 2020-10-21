#include<stdio.h>
int main()
{
    typedef struct
    {
        char name[100];
        char id[100];
        float cgpa;
    }student;

    student std[1000],temp;
    int i,j,n;
    printf("How many student: ");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        printf("Enter the id for the student %d: ",i+1);

        scanf("%s",std[i].id);

        printf("\nEnter the Name for the student %d: ",i+1);

        scanf(" %[^\n]",std[i].name);

       printf("\nEnter the cgpa for the student %d: ",i+1);

        scanf("%f",&std[i].cgpa);

    }
    printf("\n\nOutput\n\n");
    for(i=0; i<n; i++)
    {   for(j=i+1;j<n; j++)
    {
        if(std[i].cgpa<std[j].cgpa)
        {
        temp=std[i];
        std[i]=std[j];
        std[j]=temp;
        }
    }

    }
    for(i=0; i<n; i++)
    {
        printf("Id: %s\t",std[i].id);

        printf("Name: %s\t",std[i].name);

        printf("Cgpa: %.2f\n\n",std[i].cgpa);

    }
    return 0;

}
