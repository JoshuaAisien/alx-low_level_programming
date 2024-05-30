#include <stdio.h>

long int largest_prime_factor(long int n) {
    long int factor = 2;

    while (n > 1) {
        if (n % factor == 0) {
            n /= factor;
        } else {
            factor++;
        }
    }

    return factor;
}

int main() {
    long int number = 612852475143;
    long int largest_factor = largest_prime_factor(number);
    printf("The largest prime factor of %ld is %ld\n", number, largest_factor);
    return 0;
}
