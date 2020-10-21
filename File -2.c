#include<stdio.h>
int main()
{
    FILE *fp;

    char filename[] = "my_file.txt";

    fp = fopen(filename, "a+");

    fprintf(fp, "This is a file! ");

    fprintf(fp, "I am so happy.\n");

    fclose(fp);

    /*fp = fopen(filename, "a+");

    fprintf(fp, "second line.\n");
    fprintf(fp, "Fahim ahmed shojib!");

    fclose(fp);


    */return 0;


}
