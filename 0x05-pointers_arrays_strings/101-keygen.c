#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generstes random pasdwords.
 *
 * Return: 0
 */

#define PASSWORD_LENGTH 12

int main(void)
{
	const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_+-=[]{}|;:,.<>?";
	const size_t charset_length = sizeof(charset) - 1;
	char password[PASSWORD_LENGTH + 1];
	int i;

	srand(time(NULL));
	for (i = 0; i < PASSWORD_LENGTH; ++i)
	{
		password[i] = charset[rand() % charset_length];
	}

	password[PASSWORD_LENGTH] = '\0';
	printf("%s\n", password);

	return (0);
}
