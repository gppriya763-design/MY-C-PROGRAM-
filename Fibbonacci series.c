#include <stdio.h>

int main() {
    int n, a = 0, b = 1, next, i = 1;

    printf("Enter how many terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series:\n");

    while (i <= n) {
        printf("%d ", a);

        next = a + b;  
        a = b;      
        b = next;

        i++;
    }

    return 0;
}
