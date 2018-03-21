#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    //declaring variables
    float change = 0.0;
    float zero = 0.00;
    int irounded = 0;
    float frounded;
    int count = 0;

    do
    {
        //initial check against negative numbers
        if (change >= 0 || change <= 0)
        {
            printf("Change owed:");
        }
        else
        {
            printf("Retry: ");
        }
        change = get_float();
        change = change * 100;
        irounded = round(change);
        frounded = irounded * 0.01 + 0.001;

    }
    while (change < 0);

    //loop that runs until the change becomes 0, counting coins from biggest to smallest
    while (frounded != zero)
    {
        if ((frounded - 0.25) >= zero)
        {
            frounded -= 0.25;
            count++;
        }
        else if ((frounded - 0.10) >= zero)
        {
            frounded -= 0.10;
            count++;
        }
        else if ((frounded - 0.05) >= zero)
        {
            frounded -= 0.05;
            count++;
        }
        else if ((frounded - 0.01) >= zero)
        {
            frounded -= 0.01;
            count++;
        }
        else
        {
            frounded = round(frounded);
        }
    }

    printf("%i\n", count);
}


//Take the number and divide it by the biggest unit, then if r>0 divide it by the next smaller unit and so on