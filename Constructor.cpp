#include <bits/stdc++.h>
#include <set>
using namespace std;

// class Teacher{
// public:

//   // non parametrized constructor
//   // Teacher(){ //constructor 
//   //   cout << "Hi, i am constructor\n";
//   // }

//   // parameterized constructor
//   Teacher( string n, string s, int sal){  
//     name = n;
//     subject = s;
//     salary = sal;
//   }
//   string name;
//   string subject;
//   int salary;

//   void changeSubject(string newSubject){
//     subject = newSubject;
//   }

//   void getInfo(){
//     cout << "Name: " << name << endl;
//     cout << "Subject: " << subject << endl;
//     cout << "Salary: " << salary << endl;
//   }
// };

// int main(){
//   // non paramterized constructor 

//   // Teacher t1;
//   // t1.name = "vivek";
//   // t1.subject = "C++";
//   // t1.salary = 30,00,000;
//   // cout << t1.name << endl;

//   // paramterized constructor 
//   Teacher t1("Vivek", "C++", 3000000);
//   t1.getInfo();
//   return 0;
// }

// SHALLOW COPY USING POINTER 
class Student {
public: 
  string name;
  double* cgpaPtr;

  Student(string name, double cgpa){
    this->name = name;
    cgpaPtr = new double;
    *cgpaPtr = cgpa;
  }

// SHALLOW COPY
  // Student(Student &obj) {
  //   this->name = obj.name;
  //   this->cgpaPtr = obj.cgpaPtr;
  // }

// DEEP COPY 
    // Student(Student &obj) {
    //     this->name = obj.name;
    //     cgpaPtr = new double;
    //     *cgpaPtr = *obj.cgpaPtr;
    // }

  // DESTRUCTOR 
  ~Student(){
    cout << "Hi, i am deleting everything\n";
    delete cgpaPtr;
  }

  void getInfo(){
    cout << "Name: " << name << endl;
    cout << "CGPA: " << *cgpaPtr << endl;
  }
};

int main(){
  Student s1("Rahul kumar", 8.9);
  // Student s2(s1);      //DEFUALT CONSTRUCTOR 

  s1.getInfo();
  // *(s2.cgpaPtr) = 9.2;
  // s1.getInfo();

  // s2.name = "Neha kumar";
  // s2.getInfo();
  return 0;
}