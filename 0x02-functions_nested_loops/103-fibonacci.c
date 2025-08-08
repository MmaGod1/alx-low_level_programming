#include <stdio.h>
/**
 * main - main block
 * Description: Print the sum of even Fibonacci numbers up to a fib value
 * not exceeding 4,000,000.
 * Return: 0
 */
int main(void)
{
    int i = 1, j = 2, seq, even_sum = 2;

    for (seq = i + j; seq < 4000000; seq = i + j)
    {
        if (seq % 2 == 0)
            even_sum += seq;

        i = j;
        j = seq;
    }

    printf("%d\n", even_sum);
    return (0);
}
