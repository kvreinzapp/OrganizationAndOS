// there are 3way to show float in hex
// 1st function
// 2ed a satement(seems undefined)
// 3rd from stackover flow, use union
#include <stdio.h>
// 3rd way need include
#include <stdint.h>
#include <inttypes.h>

// 1st
#include "show.h"

int main(void)
{
    int x = 2607352;
    printf("0x%08X\n", x);

    float y = 3510593.0;
    // 2ed
    printf("0x%08X\n", *(unsigned int *)&y);
    // show_float(y);
}

// // 3rd
// int main(void)
// {
//     float val = 3510593.0;
//     union
//     {
//         float f;
//         uint32_t u;
//     } f2u = {.f = val};

//     printf("your float : %f\n   : 0x%" PRIx32 "\n", val, f2u.u);
// }
// // https://stackoverflow.com/questions/45228925/how-to-print-float-as-hex-bytes-format-in-c
