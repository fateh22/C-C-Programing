/*
  g++ -o hello demo2.cpp
  ./hello
*/

#include "iostream"
using namespace std;

class Students
{
  // private data memebers
  private:

  char name[100];
  int age;
  int rollno;

  // protected data member
  protected:

  int semester;

  // public member function
  public:

  void set_data(){
    cout << "Enter Name: ";
    cin >> name;
  }

  void show_name(){
    cout << "Name: " << name;
  }

  void set_age() {
    cout << "Enter the age: ";
    cin >> age;
  }

  void get_age() {
    cout << "AGE: " << age << endl;
  }
};
int main(void)
{
    Students sunny;
    // sunny.age = 29;

    sunny.set_age();
    sunny.get_age();

    return 0;
}
