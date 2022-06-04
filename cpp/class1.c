Class Student {
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

  void show_data(){
    cout << "Name: " << name;
  }


};

int main()
{
    cout<<"Hello World";

    Student sunny;

    sunny.set_data();

    sunny.show_data();


    return 0;
}
