#include <stdio.h>
#include <stdlib.h>

int is_prime(int n) {
    if (n <= 1) return 0;
    if (n <= 3) return 1;
    if (n % 2 == 0 || n % 3 == 0) return 0;

    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return 0;
        }
    }

    return 1;
}

void prime_factors(int n) {
    if (n == 1) {
        printf("1\n");
        return;
    }

    int divisor = 2;
    int printed = 0;

    while (n > 1) {
        if (is_prime(divisor) && n % divisor == 0) {
            if (printed) {
                printf("*");
            }
            printf("%d", divisor);
            n /= divisor;
            printed = 1;
        } else {
            divisor++;
        }
    }
    printf("\n");
}

int main(int argc, char* argv[]) {
    if (argc != 2) {
        printf("\n");
        return 0;
    }

    int n = atoi(argv[1]);
    prime_factors(n);

    return 0;
}

