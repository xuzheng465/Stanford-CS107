#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void cast_ptr()
{
    int i = 107;
    float f = 3.14159;
    printf("Original: *(float *)&i = %d, *(int *)&f = %f\n", *(&i), *(&f));
    printf("Cast pointer: *(float *)&i = %f, *(int *)&f = %d\n", *(float *)&i, *(int *)&f);
    printf("Origianl addr: &i = %p, &f = %p\n", &i, &f);
    printf("addr after cast: &i = %p, &f = %p\n", (float *)&i, (int *)&f);
    printf("\n");
}

void cast_chars()
{
    int i = 107;
    float f = 3.14159;
    printf("Cast to char *: &i = \"%p\", &f = \"%p\"\n", (char *)&i, (char *)&f);
}

int main(int argc, char *argv[])
{
    cast_ptr();
    cast_chars();
    return 0;
}