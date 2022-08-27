#include <stdio.h>
#include "dt.h"

#define CLEAR_BIT(VAR, BIT) (VAR &= (~(1 << BIT - 1)))

int main (void)
{   
    u8_t x;
    u8_t n;
    u8_t z;

    printf("Enter any number here:");
    scanf("%d",&x);
    printf("Enter the nth of bit:");
    scanf("%d",&n);
    
    z = CLEAR_BIT(x, n);

    printf("The new value of the number: %d",z);

    return 0;
}