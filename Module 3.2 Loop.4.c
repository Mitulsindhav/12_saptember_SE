#include <stdio.h>

int main() 

{    int i;

    int start, end;
    int count = 0;

    printf("Enter the starting number: ");
    scanf("%d", &start);
    printf("Enter the ending number: ");
    scanf("%d", &end);

    for (i = start; i <= end; i++) {
        if (i % 2 != 0) {
            count++;
        }
    }

    printf("Number of odd numbers: %dn", count);

    
}
