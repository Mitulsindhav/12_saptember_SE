  #include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 2; i <= n; i += 2) {
        sum += i;
    }

    printf("Sum of even numbers from 2 to %d is %dn", n, sum);

    return 0;
}

/*
#include <stdio.h>

int main() {
    int number, i;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    
    printf("Table of %d:\n", number);
    for(i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", number, i, number * i);
    }
    
    return 0;
}
*/
