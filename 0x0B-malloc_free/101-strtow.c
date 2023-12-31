#include <stdlib.h>
#include <stdlib.h>

int count_words(const char *str)
{
        int count = 0;
        int i = 0;

        while (str[i] == ' ')
        {
                i++;
        }

        while (str[i] != '\0')
        {
                /**
                 * If the current character is not a space and
                 * the next character is a space or end of string
                 */
                if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
                {
                        count++;
                }
                i++;
        }
        return (count);
}


/**
 * strtow -splits a string into words.
 * @str: string to split.
 *
 * Return: a pointer to an array of strings (words)
 * and null if the function fails.
	*/

char **strtow(char *str) {
    int i = 0, j = 0, k = 0, wrd_cnt;
    char **words;

    if (str == NULL || *str == '\0') 
        return NULL;

    wrd_cnt = count_words(str);
    if (wrd_cnt == 0)
        return NULL;

    words = (char **)malloc((wrd_cnt + 1) * sizeof(char *));
    if (words == NULL)
        return NULL;

    while (str[i]) {
        if (str[i] != ' ') {
            j = i;
            while (str[j] && str[j] != ' ') {
                j++;
            }
            words[k] = (char *)malloc((j - i + 1) * sizeof(char));
            if (words[k] == NULL) {
                /* Free memory allocated so far in case of failure */
                while (k > 0) {
                    free(words[--k]);
                }
                free(words);
                return NULL;
            }

            /* Copy characters to the newly allocated memory for the word */
            j = 0;
            while (str[i] && str[i] != ' ') {
                words[k][j++] = str[i++];
            }
            words[k++][j] = '\0';
        } else {
            i++;
        }
    }
    words[k] = NULL;
/* Terminate the array of strings with NULL */

    return words;
}

