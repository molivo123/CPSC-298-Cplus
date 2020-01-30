#include "Assignment3problem1.h"


int main(int argc, char **argv) {

  Pet *p = new Pet("Poopy",12,80.5,"Cat");
  Pet *p2 = new Pet("Poppy",10,66.2,"Dog");

  cout << "The first pet's name is: " << p->getName() << endl;
  cout << "The second pet's name is: " << p2->getName() << endl;


  cout << p->getName() << "'s age is: " << p->getAge() << endl;
  cout << p2->getName() << "'s age is: " << p2->getAge() << endl;

  cout << p->getName() << "'s weight is: " << p->getWeight() << endl;
  cout << p2->getName() << "'s weight is: " << p2->getWeight() << endl;

  cout << p->getName() << " is a " << p->getType() << endl;
  cout << p2->getName() << " is a " << p2->getType() << endl;

  delete p;
  delete p2;
  
  return 0;
}
