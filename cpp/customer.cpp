/*
Class:
A class in C++ is the building block that leads to Object-Oriented programming.
It is a user-defined data type, which holds its own data members and member functions,
which can be accessed and used by creating an instance of that class. A C++ class is
like a blueprint for an object.

An Object is an instance of a Class. When a class is defined, no memory is
allocated but when it is instantiated (i.e. an object is created) memory is
allocated.

=======================
compile file - g++ cpp/customer.cpp -o bin/customer
run this file: - ./bin/customer
*/



using namespace std;
#include <iostream>
#include <string>
#include "./header/customer.h"

// Definition of getFirstName using scope resolution operator ::
void Customer::setFirstName() {
  cout << "Enter First Name: ";
  cin >> first_name;
}

void Customer::setLastName() {
  cout << "Enter Last Name: ";
  cin >> last_name;
}

int main(void){

  Customer c1;
  cout <<"=========Set Customer information ==========="<<endl;
  c1.setFirstName();
  c1.setLastName();
  c1.order_id = 123;
  c1.contact_number = "9855023924";
  c1.address = "Manak Pur Sharif";


  cout << endl<< endl;
  cout <<"=========Show Customer information ==========="<<endl;
  c1.getFullName();
  cout << "Order ID: " << c1.order_id << endl;
  cout << "Contact Number: " << c1.contact_number << endl;
  cout << "Address: " << c1.address << endl;

  return 0;
}
