#include <stdio.h>
#include "show.h"
int main(void)
{
    int val;
    printf("Enter(q): ");
    while (1 == scanf("%d", &val))
    {
        test_show_bytes(val);
    }
}
