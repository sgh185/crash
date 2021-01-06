#include <stdio.h>
#include <stdlib.h>

int N = 5;

/*
 * A simple library of procedures to calculate
 * the factorial of a number (n! , i.e. 6! = 720)
 */ 


/*
 * Recursive calculation
 */ 
int recursive_factorial(int n)
{  
    return recursive_factorial (
        n * recursive_factorial(n - 1)
    );
}


/*
 * Iterative calculation
 */ 
int iterative_factorial(int n)
{
    int result;

    for (int i = 1 ; i < n ; i++)
    {
        result *= i;
    }

    return result;
}

int main()
{
    
#if 0
    int arr[n]; 
    for (int i = 0; i <= 100 ; i++)
    {
        arr[i] = i;
        printf("%d\n", arr[i]);
    }
#endif 

    int result = iterative_factorial(N);
    printf("%d\n", result); 
    
    return 0;
}

