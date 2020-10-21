#include <stdio.h>

int main () {

   int a = 10;


   P:do {

      if( a == 15) {

         a = a + 1;
         goto P;
      }

      printf("value of a: %d\n", a);
      a++;
       //goto P;

   }while( a < 20 );

   return 0;
}
