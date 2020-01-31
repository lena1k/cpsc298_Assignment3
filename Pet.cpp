// Lena Khalidi
// Assignment 3

#include <iostream>
using namespace std;

class Pet{
public:
  // declare variables
  string name;
  int age;
  string type;
  double weight;

  // declare accessors
  string getName();
  int getAge();
  string getType();
  double getWeight();
  void setName(string name);
  void setAge(int age);
  void setType(string type);
  void setWeight(double weight);

};

// setName mutator
void Pet::setName(string petsName){
  name = petsName;
}

// setAge mutator
void Pet::setAge(int petsAge){
  age = petsAge;
}

// setType mutator
void Pet::setType(string petsType){
  type = petsType;
}

// setWeight mutator
void Pet::setWeight(double petsWeight){
  weight = petsWeight;
}

// getName accessor
string Pet:: getName(){
  return name;
}

// getAge accessor
int Pet::getAge(){
  return age;
}

// getType accessor
string Pet::getType(){
  return type;
}

// getWeight accessor
double Pet::getWeight(){
  return weight;
}

// main class
int main(){
  // create object petA
  Pet petA;
  petA.setName("Alfredo");
  petA.setAge(7);
  petA.setType("Hamster");
  petA.setWeight(30);

  // print results to console
  cout << "Name: " << petA.getName() << endl;
  cout << "Age: " <<  petA.getAge() << endl;
  cout << "Type: " << petA.getType() << endl;
  cout << "Weight: " << petA.getWeight() << endl;

  // create object petB
  Pet petB;
  cout << endl;
  petB.setName("Chad");
  petB.setAge(2);
  petB.setType("Chinchilla");
  petB.setWeight(4);
  cout << "Name: " << petB.getName() << endl;
  cout << "Age: " <<  petB.getAge() << endl;
  cout << "Type: " << petB.getType() << endl;
  cout << "Weight: " << petB.getWeight() << endl;
}
