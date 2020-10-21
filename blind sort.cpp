#include <stdio.h>
#include <math.h>
#include <string.h>

int n;

int main() {
    while (~scanf("%d", &n)) {
        printf("%d\n", n - 1 + (int)(ceil(log(n)/log(2)) + 1e-9) - 1);
    }
    return 0;
}
