#include <iostream>
#include <cmath>

using namespace std;

int rand(int n){
  int result = rand() % n;
  return result;
}

int main(){

  int n = 0;
  int r = 0;

  cout << "Enter number of dice to roll: ";
  cin >> n;

  for(int i = 1; i <= n ; i++){
    r = rand(6) + 1;
    cout << r << " ";
  }
  
  return 0;
}