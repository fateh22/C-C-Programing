// multiple inheritance
/*
  Protected: When the member is declared as protected, it is accessible within 
  its own class as well as the class immediately derived from it.
*/

#include <iostream>
using namespace std;

class A {
  protected:
  int a;

  public:
  void get_a(int n){
    a = n;
  }
};

class B {
  protected:
  int b;

  public:
  void get_b(int n) {
     b = n;
  }
};

class C: public A, public B {
  public:
  void display(){
    cout << "The value of a is : " <<a<< endl;
    cout << "The value of b is : " <<b<< endl;
    cout<<"Addition of a and b is : "<< a+b;
  }

};


int main() {

  C c1;

  c1.get_a(12);
  c1.get_b(15);

  c1.display();


  return 0;
}
