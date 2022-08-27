#include <stdio.h>
#include "dt.h"

#define GET_BIT(VAR, BIT)   (VAR &= (1 << BIT - 1))

int main (void)
{      
    u8_t x;
    u8_t n;
    u8_t z;

    printf("Enter any number here:");
    scanf("%d",&x);
    printf("Enter the nth of bit:");
    scanf("%d",&n);
    
    z = GET_BIT(x, n);

    if (z == 0)\
    {\
        printf("The value of bit is:0");
    }
    else
    {
        printf("The value of bit is:1");
    }
    
    return 0;
}