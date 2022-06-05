// Single Inheritance

using namespace std;
#include "iostream"

// Base Class
class Account {
  public:
  float salary = 60000;

  public:
  void getName(){
    cout<< "My Name Is Sunny";
  }

};

// Drived class
class Programmer: public Account
{
  public:
  float bonus = 5000;
};

int main(void) {
  Programmer program;

  cout << "Bounce: "<< program.bonus <<endl;
  cout << "salary: "<< program.salary << endl;
  program.getName();
  cout << endl;

  return 0;
}
