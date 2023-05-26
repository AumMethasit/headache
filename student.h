#include <iostream>
using namespace std;

class student{
private:
  long id;
  string name,advisor;
  float age;
  float gpa;
  double stress_level;

public:
  void set_name(string);
  void print_name();
  void set_age(int);
  int get_age(); 
};

void student::print_name(){
    cout<<"Name : "<<name<<endl;
}

void student::set_name(string n){
  name=n;
}

int student::get_age(){
  return age;
}
void student::set_age(int n){
  age=n;
}