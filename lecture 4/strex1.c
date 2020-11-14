#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) 
{
    char str[9];
    strcpy(str, "Hi earth");
    str[2] = '\0';
    printf("str = %s, len = %lu\n", str, strlen(str));
    return 0;
}