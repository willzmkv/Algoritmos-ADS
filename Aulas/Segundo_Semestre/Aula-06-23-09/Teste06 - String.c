#include <stdio.h>
int main(void)
{
    char palavra[] = "Ponteiro";
    char *p = palavra;
    while (*p != '\0')
    {
        printf("%c\n", *p);
        p++;
    }
    return 0;
}