#include <iostream>
#include <cmath>
using namespace std;

//initializing variables
int maxRoomCap;
int numPeopleAttending;
int tooManyPeople;
int notEnoughPeople;

//getting num of people and max num of people
int main() {
  cout << "How many people are attending the event? " << endl;
  cin >> numPeopleAttending;

  cout << "What is the max number of people ? " << endl;
  cin >> maxRoomCap;

//if statement to pick a case
  if(numPeopleAttending > maxRoomCap){
    tooManyPeople = (maxRoomCap - numPeopleAttending);
    cout << "Too many people, fire regulations prevent more than " << maxRoomCap << " from being in this building. " << fabs(tooManyPeople) << " people/person must leave." << endl;
  }
  else{
    notEnoughPeople = (maxRoomCap - numPeopleAttending);
    cout << "This is an acceptable number of people, " << notEnoughPeople << " people can still come" << endl;
  }



  return 0;
}
