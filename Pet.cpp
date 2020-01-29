#include <iostream>
using namespace std;

class Pet{
public:
  string name;
  int age;
  string type;
  double weight;

  string getName();
  int getAge();
  string getType();
  double getWeight();
  void setName(string name);
  void setAge(int age);
  void setType(string type);
  void setWeight(double weight);

};

void Pet::setName(string petsName){
  name = petsName;
}

void Pet::setAge(int petsAge){
  age = petsAge;
}

void Pet::setType(string petsType){
  type = petsType;
}

void Pet::setWeight(double petsWeight){
  weight = petsWeight;
}
string Pet:: getName(){
  return name;
}
int Pet::getAge(){
  return age;
}
string Pet::getType(){
  return type;
}
double Pet::getWeight(){
  return weight;
}
int main(){
  Pet petA;
  petA.setName("Alfredo");
  petA.setAge(7);
  petA.setType("Hamster");
  petA.setWeight(30);

  cout << "Name: " << petA.getName() << endl;
  cout << "Age: " <<  petA.getAge() << endl;
  cout << "Type: " << petA.getType() << endl;
  cout << "Weight: " << petA.getWeight() << endl;

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
