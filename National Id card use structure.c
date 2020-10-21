#include<stdio.h>
int main()
{
    typedef struct
    {
        char name[100],father_name[100],
             mother_name[100],date_of_birth[100],id[100];
    } Nationality;

    Nationality one[100];
    int i,j,n;

    printf("How many man: ");

    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        printf("Name,father name,mother name,date of birth,id no:\n");
        scanf(" %[^\n] %[^\n] %[^\n] %[^\n] %s",one[i].name,one[i].
              father_name,one[i].mother_name,one[i].date_of_birth,
              one[i].id);
    }
    printf("\nNational Id:\n");
    for(i=0; i<n; i++)
    {
        printf("Name:%s\nFather name:%s\nMother name:%s\nDate of birth:%s\nID:%s\n",one[i].name,one[i].
               father_name,one[i].mother_name,one[i].date_of_birth,
               one[i].id);
    }

    return 0;


}

