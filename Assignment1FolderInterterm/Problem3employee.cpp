#include <iostream>
#include <cmath>
using namespace std;

//all my variables
double hourPay = 16.00;
int hoursWorked;
double totalPay;
double takeHomeMoney;
double ssTax = .06;
double fedTax = .14;
double stateTax = .05;
int medInsurance = 10;
int socialTake;
int fedTake;
int stateTake;

// not quite sure how to get amount of each tax withholding

int main() {
  //prompt to get weekly hours
  cout << "How many hours did you work this week? " << endl;
  cin >> hoursWorked;

  //equations for total  pay
  totalPay = hourPay * hoursWorked;

  // definitely not the best way to get these withholdings
  socialTake = fabs((totalPay * (1-ssTax)) - totalPay);
  fedTake = fabs((totalPay * ( 1- fedTax)) - totalPay);
  stateTake = fabs((totalPay * (1 - stateTax)) - totalPay);

  takeHomeMoney = totalPay * (1 - ssTax - fedTax - stateTax) - medInsurance;


// all of my outputs
  cout << "Amount social took from you: " << socialTake << endl;
  cout << "Amount the feds took from you: " << fedTake << endl;
  cout << "Amount the state took from you: " << stateTake << endl;
  cout << "Total Pay is: " << totalPay << "$"<< endl;
  cout << "Amount of cash taken home is: " << takeHomeMoney << "$" << endl;


  return 0;
}
