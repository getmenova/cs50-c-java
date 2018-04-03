/*1-sided mario.
print a right triangle made of hashes and spaces.
$ ./mario
Height: 5
    ##
   ###
  ####
 #####
######
*/

#include <stdio.h>
#include <cs50.h>

// int get_int();  //declare a function without defining it=specify funct prototype

int main(void) 
{

	int height = 0;
	
	 
	do {     //grab user input. Check it is within range. If not- ask for retry. 
		printf("Height: ");
		height = get_int();   //=8
        if (height == 0){
            return 0;
        }
	} while (height < 1 || height > 23);

	for(int i = 0; i < height; i++){ //8 rows to print. For the 1st row:
        for(int j = 0; j < height-i-1; j++){ //print 7 spaces
            printf("%s", " ");
        }
            for(int k = 0; k < i+2; k++){ //print 2 hashes='#' character.
                printf("#");
            }
        printf("\n");  //1st row is done. Let's go to row #2.
	}	
	return 0;
}