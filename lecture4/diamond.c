/**
 * CS107
 *
 * This program prints out the provided command line argument string
 * in a diamond pattern.  For instance, if you provide "DAISY" as a
 * command-line argument, it will print out the following pattern:
 *
 * D
 * DA
 * DAI
 * DAIS
 * DAISY
 *  AISY
 *   ISY
 *    SY
 *     Y
 */

#include <stdio.h>
#include <string.h>
#include <error.h>

void printstr(char *str, int start, int end)
{
    if (start == 0)
    {
        for (int i = start; i <= end; i++)
        {
            printf("%c", str[i]);
        }
        return;
    }
    for (int j = 0; j < start; j++)
    {
        printf(" ");
    }
    for (int l = start; l < end; l++)
    {
        printf("%c", str[l]);
    }
}

void diamond(char *str)
{
    // TODO
    int size = strlen(str);
    // printf("The size of str %d\n", size);
    for (int j = 0; j < size; j++)
    {
        printstr(str, 0, j);
        printf("\n");
    }
    for (int j = 1; j < size; j++)
    {
        printstr(str, j, size);
        printf("\n");
    }
}

int main(int argc, char *argv[])
{
    if (argc == 1)
    {
        error(1, 0, "Usage: ./diamond <TEXT>");
    }
    else
    {
        diamond(argv[1]);
    }

    return 0;
}
