/*
 * Author: Quickgrid ( Asif Ahmed )
 * Site: https://quickgrid.wordpress.com
 * Problem: UVA 673 ( Parentheses Balance )
 */

#include<stdio.h>

#define SIZE 256

char stack[SIZE];

int main(){
    register unsigned n, i;
    unsigned ch;
    scanf("%u", &n); getchar();

    while(n--){
        register int top = -1;
        unsigned error = 0;

        while ((ch = getchar()) != '\n'){
            if (ch == ' ') continue;
            if (ch == '[' || ch == '(') stack[++top] = ch;
            else if ((ch == ']' && stack[top] == '[') || (ch == ')' && stack[top] == '(')) --top;
            else error = 1;
        }

        if (error || top > -1) printf("No\n");
        else printf("Yes\n");
    }
    return 0;
}
