#include <cs50.h>
#include <stdio.h>
int main()
{
    int h;
    int acrsum; 
    do {
        printf("Height: ");
        h = get_int();
    } while(h < 0 || h > 23);
    
    if(h==1)
    {
        printf("##\n");
    }
    else
    {
        acrsum = h + 1;
        
        for(int across=0; across < h; across++)
        {
            for(int down=0; down < acrsum; down++)
            {
            if(down >= acrsum-across - 2) printf("#"); 
            else printf(" ");
            }
            printf("\n");
        }
    }
}
