#include "lib.h"

/*
 * Test driver code for library
 */ 
int main(int argc, char *argv[])
{
    /*
     * Process arguments
     */ 
    if (argc < 2) 
    {
        fprintf(stderr, "USAGE: ./driver N\n");
        exit(1);
    }


    /*
     * Fetch "N" --- to calculate the
     * factorial value
     */ 
    int N = atoi(argv[1]);

   
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

    
    return 0;
}

