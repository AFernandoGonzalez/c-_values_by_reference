#include <iostream>

using namespace std;

// pass by value
int curve(int score){
  score = score+5;
  return score;
}

// pass by refenrence
void swap(int &a, int &b){
  int temp = a;
  a = b;
  b = temp;
}

int main() {

  int grade = 75;
  int x = 5, y = 7;

  cout << curve(grade) << endl;
  // pass 
  cout << grade <<endl;

  // seond function
  swap(x,y);
  cout << "x: " << x << " y: " << y << endl;

  return 0;
}