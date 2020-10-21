#include <stdio.h>
#include <string.h>

int main () {
    int i;
   char str[7];

  // strcpy(str,"This is string.h library function");
  // puts(str);

   memset(str,'A',7);

   for(i=0; i<strlen(str)-1; i++)
   {
       printf("%c ",str[i]);
   }



  //puts(str);
   return(0);
}
