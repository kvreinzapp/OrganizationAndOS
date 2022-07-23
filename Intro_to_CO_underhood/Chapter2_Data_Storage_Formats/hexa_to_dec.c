#include <stdio.h>
int main(void)
{
    unsigned int anInt;

    printf("Enter a number in hexadecimal: ");
    scanf("%x", &anInt);
    printf("0x%x=%u\n", anInt, anInt);
}