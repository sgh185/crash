#include "lib.h"

int N = 10;

/*
 * Recursive factorial calculation
 */ 
int recursive_factorial(int n)
{  
    /*
     * Recurse
     */ 
    return recursive_factorial(n * (n - 1));
}


/*
 * Iterative factorial calculation
 */ 
int iterative_factorial(int n)
{
    /*
     * Iteratively compute using a loop 
     */ 
    int result = 0;
    for (int i = 2 ; i <= n ; i++)
    {
        result *= i;
    }


    return result;
}


/*
 * Square root of a factorial
 */ 
double sqrt_of_factorial(int n)
{
    /*
     * Calculate the factorial
     */
    double factorial = iterative_factorial(n);


    /*
     * Return the sqrt of the factorial
     */ 
    return sqrt(factorial);
}


