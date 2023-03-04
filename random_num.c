#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Return: 0
*/

int main(void)
{
      int n; //initializing n

      srand(time(0)); /* Calling the function time() from the time.h header file inside "srand()" from the stdlib.h header file to generate random numbers each time i run the program. NB: rand() has been seed */
      
      n = rand() - RAND_MAX / 2;

         if (n > 0)
         {
            printf("%d is positive\n", n);
         }
         if (n == 0)
         {
            printf("%d is zero\n", n);
         } 
         if (n < 0)
         {
            printf("%d is negative\n", n);
         }
         else
         {
            printf("%d\n", n);
         }
         
         return (0);

}