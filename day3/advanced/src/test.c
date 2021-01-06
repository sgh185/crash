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
     * Calculate the factorial
     */ 
    int result = recursive_factorial(N);
    printf("%d\n", result);


    return 0;
}

