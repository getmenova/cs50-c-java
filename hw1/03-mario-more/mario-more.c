/*2-sided mario.
print a right triangle reflected around y-axis; 
size of the gap between 2 triangles= 2.
$ ./mario
Height: 4
   #  #
  ##  ##
 ###  ###
####  ####*/
#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height;
    do{
        height = get_int("enter height of the piramid: num between 0 and 23: ");
    }while
    (height < 0 || height > 23); //ask user for hight

 
    //on each row
    for (int row = 0; row < height; row++)   {
        //print left triangle's spaces
        for (int s = 0; s < height- row - 1; s++){ //7 left spaces; index=6
            printf(" ");
        }   
        
        //print  left triangle's hashtags
        for (int left_h = 0; left_h < row+1; left_h++){ //2 hashtags; indices=7,8
            printf("#");
                
        }
        //print 2-spaces-wide gap
        printf("  ");
        //for (int mspaces = 0; mspaces < 2; mspaces++){printf(" ");}

          
        //print right triangle's hashtags
        for (int right_h = 0; right_h <row + 1; right_h++){
                printf("#");
        }
        
        printf("\n"); //move to new line
    }
    return 0;
}