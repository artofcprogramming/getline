#include <stdio.h>

int main()
{
    int lim = 100;
    char s[100];
    int c, i;

    printf("Enter a string: ");
    for (i = 0; i < lim-1 && (c = getchar()) != '\n' && c != EOF; ++i)
        s[i] = c;
    s[i] = '\0';

    printf("String: %s\n", s);
    printf("Length: %d\n", i);
}
