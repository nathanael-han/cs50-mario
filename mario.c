//This program constructs a right-aligned pyramid of a given height.
#include <stdio.h>
#include <cs50.h>


int main(void)
{
    int height;

    //Prompt user for height
    do
    {
        height = get_int("Positive number: ");
    }
    while (height > 8 || height < 1);


    // Constructs right-aligned pyramid.
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < height; j++)
        {
            if (i + j < height - 1)

            {
                printf(" ");
            }
            else
            {
                printf("#");
            }
        }

        printf("\n");

    }
}


