#include <stdio.h>

int main() {
    int num;
 printf("Enter a numbers: ");
    scanf("%d", &num);
    if (num > 0) {
        printf("%d is the positive number\n");
    } else if (num> 0 ){
        printf("%d is the negative number\n");
    } else {
        printf("the numbers is  zero\n");
    }

    return 0;
}
