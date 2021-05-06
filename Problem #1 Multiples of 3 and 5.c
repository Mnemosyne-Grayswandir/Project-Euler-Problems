/*
    Project Euler Problem #1: Multiples of 3 and 5
    Task: Find the sum of all the multiples of 3 and 5 below 1000
    Answer: 233168
    By: Mary Grizelle D. Hamor
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, sum = 0;

    for (i = 1; i < 1000; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            sum += i;
        }
    }

    printf("Sum of all the multiples of 3 and 5 below 1000: %d\n", sum);

    return 0;
}
