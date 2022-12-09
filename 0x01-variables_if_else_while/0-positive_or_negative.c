#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/* more headers goes there */



/* betty style doc for function main goes there */

int main(void)

{

		int n;



			srand(time(0));

				n = rand() - RAND_MAX / 2;

					/* your code goes there */
					
					printf("The exact value of n is: %d\n", n);

					if(n > 0){
						printf("The number %d is positive\n", n);
				       	};

					else(n == 0){
						printf("This number is zero\n");

					else if(n < 0){
						printf("This number is negative\n");

					return (0);

}
