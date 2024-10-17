#include <stdio.h>

int main()
{
    int code[3] = { 'A', 'a', '0' };

    for (int i = 0; i < 3; i++)
    {
        printf("%c\n", char(code[i]));
        printf("Octal representation: %o\n", code[i]);
        printf("Decimal representation: %d\n", code[i]);
        printf("Hexadecimal representation: %x\n\n", code[i]);
        
    }

    return 0;
}