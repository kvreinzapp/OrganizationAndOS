#include <stdio.h>
#include "show.h"
int main(void)
{
    // int a = 0x12345678;
    int a = 2607352;
    byte_pointer ap = (byte_pointer)&a;
    show_bytes(ap, 1);
    show_bytes(ap, 2);
    show_bytes(ap, 3);
    show_bytes(ap, 4);
}