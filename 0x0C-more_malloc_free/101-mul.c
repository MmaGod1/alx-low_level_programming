#include <stdio.h>
#include <stdlib.h>

/**
 * check_input - check if the input string contains only digits
 * @str: the string.
 *
 * Return: 1 of true.
 */
int check_input(char *str)
{
	while (*str != '\0')
	{
		if (*str < '0' || *str > '9)
			return (0);
		str++;
	}
	return (1);
}

/**
 * multipy - multiply two positive numbers.
 * @num1: first number to be multiplied
 * @num2: second number to multiply.
 *
 * Return: nothing.
 */
int *performMultiplication(char *num1, char *num2) {
    int len1 = 0, len2 = 0, i, j;
    while (num1[len1] != '\0') {
        len1++;
    }
    while (num2[len2] != '\0') {
        len2++;
    }

    int *result = (int *)malloc(sizeof(int) * (len1 + len2));
    if (result == NULL) {
        printf("Memory allocation failed\n");
        exit(98);
    }

    // Initialize the result array to 0
    for (i = 0; i < len1 + len2; i++) {
        result[i] = 0;
    }

    // Multiply each digit and store the result in the array
    for (i = len1 - 1; i >= 0; i--) {
        for (j = len2 - 1; j >= 0; j--) {
            int mul = (num1[i] - '0') * (num2[j] - '0');
            int sum = result[i + j + 1] + mul;
            result[i + j] += sum / 10;
            result[i + j + 1] = sum % 10;
        }
    }

    return result;
}


// Function to print the result of multiplication
void printResult(int *result, int len) {
    int i = 0;
    // Skip leading zeroes
    while (i < len && result[i] == 0) {
        i++;
    }

    // Print the result
    if (i == len) {
        printf("0\n");
    } else {
        while (i < len) {
            printf("%d", result[i]);
            i++;
        }
        printf("\n");
    }

    free(result);
}




int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	if (!isValidInput(argv[1]) || !isValidInput(argv[2]))
	{
		printf("Error\n");
		return (98);
	}

	multiply(argv[1], argv[2]);
	return (0);
}
