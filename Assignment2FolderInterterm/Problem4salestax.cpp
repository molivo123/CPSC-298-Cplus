#include <iostream>
#include <cmath>
using namespace std;


float addTax(float taxRate, float cost){

  float newCost;
  cout << "The old cost was: " << cost << ", and the sales tax is: "<< taxRate<< endl;

  newCost = cost + (cost * (taxRate / 100));

  return newCost;

}


int main(int argc, char **argv) {

  cout << "The new cost is: " <<addTax(4,20) << endl;

  return 0;
}
