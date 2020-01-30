#include <iostream>
using namespace std;

//initializing variables
double packWeight;
double metricTonWeight;
double numofBoxes;

int main() {
//user input
  cout << "Give me the weight of the package in ounces: ";
  cin >> packWeight;
  metricTonWeight = (packWeight /  35273.92);

//if statment to do the division
  if(true){
    numofBoxes =  (35273.92 / packWeight);
}
    cout << "The package weighs: "<< metricTonWeight << " metric tons." << endl;
    cout << "There are: " << numofBoxes << " boxes" << endl;
// final outputs
  return 0;
}
