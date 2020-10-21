#include<stdio.h>
void sort(float std,float n)
{
    int i,j,temp;
    float std[500];
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(std[i]<std[j])
            {
                temp=std[i];
                std[i]=std[j];
                std[j]=temp;
            }
        }
    }
    return;
}
int main()
{
    typedef struct
    {
        char name[500],id[500];
        float cgpa;
    } student;

    student std[500],temp;

    int i,j,n;

    printf("How many input: ");

    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        printf("Enter Id:Name:cgpa for %d\n",i+1);

        scanf("%s %[^\n] %f",std[i].id,std[i].name,&std[i].cgpa);
    }

    printf("output:\n\n");
    for(i=0; i<n; i++)
    {
        printf("Name:%s\tRoll:%d\tcgpa:%.2f\n\n",std[i].name,i+1,std[i].cgpa);


    }
    return 0;


}


