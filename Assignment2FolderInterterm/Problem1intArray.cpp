#include <iostream>
#include <cmath>
#include <array>
using namespace std;


//all code in main method

int main(int argc, char **argv) {
//  my array
  int numberArray [10] = { 0, 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9};

//for loop to iterate through array
  for (int i = 0; i < 10; ++i ){

    cout << numberArray[i] << " ";
  }
  cout << endl;


  return 0;
}
