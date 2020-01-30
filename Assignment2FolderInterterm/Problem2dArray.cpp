#include <iostream>
#include <array>
using namespace std;

int  main(int argc, char **argv) {

  //https://processing.org/tutorials/2darray/
  int num;
  int a[4][5];

  for (int i = 0; i < 4; ++i){

    for (int j = 0; j < 5; ++j){

      cout << "Please input a number: " << endl;
      cin >> num;
      a[i][j] = num;

    }
  }
  cout << "The array has been filled!" << endl;


  return 0;
}
