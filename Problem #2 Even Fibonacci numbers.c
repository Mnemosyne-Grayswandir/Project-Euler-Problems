/*
    Project Euler Problem #2: Even Fibonacci numbers
    Task: Find the sum of the even-valued terms in the Fibonacci sequence below 4 million
    Answer: 4613732
    By: Mary Grizelle D. Hamor
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 1, b = 2, sum = 0;
    int num = a + b;

    printf("Fibonacci Sequence: ");

    while (a <= 4000000){
        num = a;
        a = b;
        b += num;
        printf("%d ", num);

        if (num % 2 == 0) {
            sum += num;
        }
    }

    printf("\nSum of even numbers in the sequence: %d", sum);

    return 0;
}
