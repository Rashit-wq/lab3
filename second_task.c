#include <stdio.h>

int sum_of_divisors(int n) {
    int sum = 0;
    for (int i = 1; i <= n / 2; i++) { // no need to check beyond n/2
        if (n % i == 0) {
            sum += i;
        }
    }
    return sum;
}

int main() {
    int number;

    
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    if (number <= 0) {
        printf("Please enter a positive integer greater than 0.\n");
        return 1;
    }

    // Calculate sum of divisors
    int sum = sum_of_divisors(number);

    // Print the result
    printf("Sum of proper divisors (excluding the number itself) of %d is: %d\n", number, sum);

    // Check for perfect number
    if (sum == number) {
        printf("%d is a PERFECT number.\n", number);
    } else {
        printf("%d is NOT a perfect number.\n", number);
    }

    return 0;
}
