#include <bits/stdc++.h>
#include <set>
using namespace std;

class Teacher{
public:

  // non parametrized constructor
  // Teacher(){ //constructor 
  //   cout << "Hi, i am constructor\n";
  // }

  // parameterized constructor
  Teacher( string n, string s, int sal){  
    name = n;
    subject = s;
    salary = sal;
  }
  string name;
  string subject;
  int salary;

  void changeSubject(string newSubject){
    subject = newSubject;
  }

  void getInfo(){
    cout << "Name: " << name << endl;
    cout << "Subject: " << subject << endl;
    cout << "Salary: " << salary << endl;
  }
};

int main(){
  // non paramterized constructor 

  // Teacher t1;
  // t1.name = "vivek";
  // t1.subject = "C++";
  // t1.salary = 30,00,000;
  // cout << t1.name << endl;

  // paramterized constructor 
  Teacher t1("Vivek", "C++", 3000000);
  t1.getInfo();
  return 0;
}