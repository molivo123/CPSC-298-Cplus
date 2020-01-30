#include <iostream>
#include <string>

using namespace std;

class Pet{
public:
  Pet();
  Pet(string name, int age, double weight, string type);

  //accessing getters
  string getName();
  int getAge();
  double getWeight();
  string getType();

  //accessing setters
  void setName(string name);
  void setAge(int age);
  void setWeight(double weight);
  void setType(string type);

private:
  string p_name;
  int p_age;
  double p_weight;
  string p_type;

};
