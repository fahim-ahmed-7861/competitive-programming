#include<stdio.h>
int main()
{
    FILE *fp_in, *fp_out,*T;
    //char filename[] = "input_file.text";
    char name[]="shojib.text";


    char output_file[] = "out.text";

     //char filename[] = "my_file.text";

     T=fopen(name, "r");
     //f=fopen(name, "w");




    int num1,num2,sum;

     //fp= fopen(my_file.text, "r");



    fp_out=fopen(output_file, "w");

    fscanf(T, "%d", &num1);

    fscanf(T, "%d", &num2);
    sum=num1+num2;

    printf("%d %d %d\n",num1,num2,sum);

    fprintf(fp_out, "%d\n",sum);

    fclose(T);

    fclose(fp_out);
    return 0;




}
