//doc: https://stackoverflow.com/questions/9579930/separating-class-code-into-a-header-and-cpp-file

#ifndef CUSTOMER_H

  class Customer {
    // Private data members
    private:
    char first_name[20]; // 1 Byte
    char last_name[20]; // 1 Byte

    public:
    int order_id; // 2 Byte
    string contact_number;
    string address;

    public:
    // Inside class definition
    void getFirstName(){
      cout << "First Name: " << first_name << endl;
    }

    void getLastName(){
      cout << "Last Name: " << last_name << endl;
    }

    void getFullName(){
      cout << "Full Name: " << first_name << " " << last_name << endl;
    }

    // getFirstName is not defined inside class definition
    void setFirstName();
    void setLastName();
  };

#endif
