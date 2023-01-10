#include <stdio.h>
int main() {
    int a,n;
    int result = 1;
    printf("Enter a base number: ");
    scanf("%d", &a);
    printf("Enter an exponent: ");
    scanf("%d", &n);

    while (n != 0) {
        result = result*a;
        --n;
    }
    printf("Answer = %d", result);
    return 0;
}