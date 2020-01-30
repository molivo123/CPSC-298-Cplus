#include <iostream>
#include <cmath>
using namespace std;


// method to convert feet and inches to total inches
float lengthInput(int feet, int inches){
  int totalInches;

  totalInches = (feet * 12) + inches;

  cout << "Your length is a total of: " << totalInches << " Inches."<< endl;
}

// method to convert total inches to meters
float convertInput(){
  int totalInches;

  float meters;
  float cm;

  meters = totalInches * 0.0254;
  cm = totalInches * 2.54;

  cout << "Which is: " << meters << " meters." << endl;
  cout << "It is also: " << cm << " centimeters." << endl;

}

// main method
int main(int argc, char **argv) {
  int feet;
  int inches;
  int totalInches;
  string keepGoing;
  keepGoing = "KeepGoing";

//while loop to continue to ask user if they would like to keep going
  while (keepGoing == "KeepGoing") {

    cout << "How many feet is the length you are describing? " << endl;
    cin >> feet;
    cout << "How many additional inches? " << endl;
    cin >> inches;

    lengthInput(feet, inches);
    convertInput();

    cout << "Type " << keepGoing <<" then press enter/return to go again, or type anything else followed by enter/return to exit: " << endl;
    cin >> keepGoing;
    if(keepGoing != "KeepGoing"){
      break;
    }

}
  return 0;
}
