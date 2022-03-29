// C program to illustrate
// call by value

#include <iostream>

using namespace std;


// Function Prototype
// void swapx(int x, int y);

// Swap functions that swaps
// two values
void swapx(int x, int y){
    int temp;

  // exmaple x=1 y=2
  // temp = 1
  // x = 1
  // x = 2
  // y = 1
  
    temp = x;
    x = y;
    y = temp;

    printf("x=%d y=%d\n", x, y);
}

// Main function
int main(){
    int a = 1, b = 2;

    // Pass by Values
    swapx(a, b);

    printf("a=%d b=%d\n", a, b);

    return 0;
}




// Output:
// x=20 y=10
// a=10 b=20