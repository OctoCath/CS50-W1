#include <stdio.h>
#include <cs50.h>

int main(void) {

    int h = 0;
    int rowpt;
    do { 
        printf("Height: ");
        h = get_int();
       } while(h < 0 || h > 23);
    
        if(h == 1)  
            {printf("##\n");} 
        else {
             int rsum = h+1; 
            
        for(rowpt = 0; rowpt < h; rowpt++) 
        {
            for(int dpt=0; dpt < rsum; dpt++)
            {
                if(dpt >= rsum -rowpt - 2) printf("#");
                else printf("%s", " ");
            }
            printf ("\n");
        }
            }
}

/*Notes
General Concepts: remember that computers print from left to right (across) and top to bottom (down)
and that they start counting at 0; 1,2,3, ... n. We're setting our code to scan and pinpoint number of imaginery "grids" across/down 
and stating what to print.

Line by line:
2 - get_int (specialized function from CS50 library), must include
6 - this is how we initialize a variable: naming it and setting its value.
7 - rowpoint is the horizontal grid# (0,1,2...and so on.)
8 - Walkthrough tip: using the do while loop to prompt user for height input first - in getint part / printf is the visual
11 - //in the while(*input INVALID condition*) so that dowhile loop prompts user until 
valid parameter (1-23) is entered function the printing in next section.
13-27 - printing the pyramid with #s and " ".
13 - pattern: we established that all h has ## (2#s) as its top. That starts when h = 1.
16 - rsum is the change in extra # gained in each lvl of downs; spacing++ on left because pattern is base = h+1 as h++.
18 - rowpt marks the horizontal row grid #0,1,2,3..; row number# pattern = h-1. (i.e. if h=3, r is 2. but r initializes at 0.)
Function: this outer for loop scans the horizontal (row) and each gridpt, matching the below for loop functions:
20 - this inner for loop scans the vertical (down) gridpt/grid#s: 0,1,2,3..; determines when to move(e.g. d0 to d1).
Together, line 18+20 makes a "coordinate" (r0,d0) -- (r0,d1) -- (r0,d2) scan.
22 - input values for d-point; rsum(total numbers in the row,e.g.r0-r3=4); and r-point;
-2 is taking out the constant (##) in each row; so printing focuses on new gridcoords for #/" " changes
23 - the if-else here will determine the writing of # or space in the grid.
25 - part of the outer for loop; prints a new row line continuously as required.
*/
