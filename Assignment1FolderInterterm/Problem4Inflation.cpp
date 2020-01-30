#include <iostream>
#include <cmath>
using namespace std;

int main(){
  float currCost;
  float numOfYears;
  float inflationRate;
  float adjustedPrice;


  cout << "What is the current cost of an item: " << endl;
  cin >> currCost;

  cout << "How many years from now will the item be purchased: " << endl;
  cin >> numOfYears;

  cout << "What is the inflatio rate (as a percent without%): " << endl;
  cin >> inflationRate;




  adjustedPrice = currCost + (currCost * (inflationRate / 100)) * numOfYears ;

  cout << "The new cost will be: $" << adjustedPrice << endl;

}
