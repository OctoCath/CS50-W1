//Tip: remember that computers print from left to right (across) and top to bottom (down)
//and that they start counting at 0; 1,2,3, ... n
//by counting number of imaginery "grids" across/down and stating what to print, you'll nail this assignment!

#include <stdio.h>
#include <cs50.h>                       //need to include CS50 lib if want to use get_int (specialized function)

int main(void) {

    int h = 0;                          //initializing variable: naming it and setting it to a value.
    int rowpt;                          //rowpoint starts from 0,1,2...so on.
    do {                                //do while loop prompts user for height input first - in getint part / printf is the visual
        printf("Height: ");
        h = get_int();
       } while(h <= 0 || h > 23);       //in the while(*input INVALID condition*) so that dowhile loop prompts user until valid parameter (1-23) is entered function the printing in next section.

//below is how we print #s and " ". 

        if(h == 1)                      //in our pyramid printing pattern, we established that all h has ## (2#s) as its top. That starts when h = 1.
            {printf("##\n");} 
        else {
             int rsum = h+1;                    //rsum reflects the change in down/rowpt spacing++ because base = h+1 as h++. It produces more gridspaces for # and " ". 
            
        for(rowpt = 0; rowpt < h; rowpt++)           //rowpt indicates the horizontal row#s 0,1,2,3..; row number pattern = h-1. this for loop scans the rows matching nested for loops                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   
        {
            for(int dpt=0; dpt < rsum; dpt++)        //for loop here matches the above outer for loop to pinpoint grid "coordinates" (e.g. r0,d0) and determines when to do a downline++
            {
                if(dpt >= rsum -rowpt - 2) printf("#");        //-2 stands for taking out the constant (##) in each row; so printing focuses on new gridcoords for #/" " changes
                else printf("%s", " ");                       //these for loops will determine the writing of # or space in the grid, with rules determined by mathematically determined conditions
            }
            printf ("\n");
        }
            }
}
