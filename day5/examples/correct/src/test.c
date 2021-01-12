#include "lib.h"

int N = 10;

/*
 * Test driver code for library
 */ 
int main(int argc, char *argv[])
{
    /*
     * Calculate the factorial recursively
     */ 
    int recursive_result = recursive_factorial(N);
    printf("%d\n", recursive_result);


    /*
     * Calculate the factorial iteratively
     */ 
    int iterative_result = iterative_factorial(N);
    printf("%d\n", iterative_result);


    /*
     * Calculate the square root of the factorial
     */
    double square_root = sqrt_of_factorial(N);
    printf("%lf\n", square_root);


    /*
    // Used to demonstrate Valgrind
     
    void *my_ptr = malloc(10);
    double *double_ptr = 0;
    *double_ptr = square_root
    
    */

    
    return 0;
}

