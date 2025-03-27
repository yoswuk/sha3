#include <stdio.h>
#include <stdint.h>
#include "fips202.h"
int main(void)
{
    uint8_t msg[64] = {0};
    uint8_t buf[1000];

    shake256(buf,128,msg,64);

    for (int i = 0; i < 128; i++)
    {
        printf("%02x ", buf[i]);
    }
    printf("\n");

    return 0;
}