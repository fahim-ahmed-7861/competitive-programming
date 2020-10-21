#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

int cmpstr(void const *a, void const *b) {
    char const *aa = (char const *)a;
    char const *bb = (char const *)b;

    return strcmp(aa, bb);
}

int main(){

   char str[1200];

   cin.getline(str,1200);
   cout<<str;
    return 0;
}
