#include "Assignment3problem1.h"

Pet::Pet(){
  p_name = "";
  p_age = 0;
  p_weight = 0;
  p_type = "";
}

Pet::Pet(string name, int age, double weight, string type){
  p_name = name;
  p_age = age;
  p_weight = weight;
  p_type = type;
}

string Pet::getName(){
  return p_name;
}
int Pet::getAge(){
  return p_age;
}
double Pet::getWeight(){
  return p_weight;
}
string Pet::getType(){
  return p_type;
}


void Pet::setName(string name){
  p_name = name;
}
void Pet::setAge(int age){
  p_age = age;
}
void Pet::setWeight(double weight){
  p_weight = weight;
}
void Pet::setType(string type){
  p_type = type;
}
