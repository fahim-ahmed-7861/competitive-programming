#include<stdio.h>

    typedef struct
    {
        char id[100],name[20];
    }student;
    int main(){
        student one;

    //one.id=109;

    //strcpy(one.name,"Fahim ahmed shojib");
    scanf("%s %[^\n]",one.id,one.name);



    printf("ID : %s\nName : %s\n",one.id,one.name);


    return 0;
}
