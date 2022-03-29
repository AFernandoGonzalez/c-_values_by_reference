// C program to illustrate
// Call by Reference

#include <iostream>

using namespace std;

// Function Prototype
// void swapx(int*, int*);

// Function to swap two variables
// by references
void swapx(int* x, int* y)
{
    int t;

    t = *x;
    *x = *y;
    *y = t;

    printf("x=%d y=%d\n", *x, *y);
}

// Main function
int main()
{
    int a = 10, b = 20;

    // Pass reference
    swapx(&a, &b);

    printf("a=%d b=%d\n", a, b);

    return 0;
}



// Output:
// x=20 y=10
// a=20 b=10