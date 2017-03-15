//write a program that recreates this half-pyramid using hashes (#) for blocks. 
//To make things more interesting, first prompt the user for the half-pyramid’s height, a non-negative integer no greater than 23. 
//(The height of the half-pyramid pictured above happens to be 8.)
//If the user fails to provide a non-negative integer no greater than 23, you should re-prompt for the same again.
//Then, generate (with the help of printf and one or more loops) the desired half-pyramid.
//Take care to align the bottom-left corner of your half-pyramid with the left-hand edge of your terminal window.

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int h; //denotes height
    do {
        printf("Height: ");
        h = get_int();
        } while(h <= 0 || h > 23);
        for(int i = 0; i < h; i++)
        {
            printf (" ."); printf ("##\n");
        }
}

//Stuck for the whole day (3/14) trying to figure out Mario's side pyramid.
//Need to clarify:
//how do I name a variable & use it, define it, with proper C syntax?
//I can already print 2 vertical lines of ## by user defined height but need to figure out: 
//how to control horizontal lines' # and spaces in descending -1 patterns ?
//how to print spaces?
