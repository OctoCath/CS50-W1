    //shower spits out 1.5 gal/min 
    //1 gal = 128 ounces, and so that shower spits out 1.5 × 128 = 192 ounces of water per minute. 
    //A typical bottle of water (that you might have for a drink, not a shower), meanwhile, might be 16 ounces. 
    //So taking a 1-minute shower is akin to using 192 ÷ 16 = 12 bottles of water. 
    //a 10-minute shower is like using 120 bottles of water.

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("Minutes: ");
    int x = get_int();
    if (x>=1)
    {
        printf("Bottles: %d\n", x*12);
    }
    else
    {
        printf("Try again with a positive integer larger than 0.\n");
    }
}
