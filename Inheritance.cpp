#include <bits/stdc++.h>
#include <set>
using namespace std;

// class Person{
// public: 

//   string name;
//   int age;

//   // Person(string name, int age){
//   //   this->name = name;
//   //   this->age = age;
//   // }

//   // Person(){
//   //   cout << "Parent constructor...\n";
//   // }
// };

// class Student : public Person{
// public: 
//   int rollno;
//   // Student(){
//   //   cout << "Child constructor...\n";
//   // }

//   // void getInfo(){
//   //   cout << "name: " << name << endl;
//   //   cout << "age: " << age << endl;
//   //   cout << "rollno: " << rollno << endl;
//   // }
// };


// MULTILEVEL INHERITANCE 
// class Gradstudent: public Student{
// public:
//   string researchArea;
// };



// MULTIPLE INHERITANCE 
// class Student{
// public:

//   string name;
//   int rollno;
// };

// class Teacher {
// public:

//   string subject;
//   int salary;
// };

// class TA : public Student, public Teacher {

// };



// HIERARCHICAL INHERITANCE 
class Person {
public:
    string name;
    int age;
};

class Student : public Person{
public:
    int rollno;
};

class Teacher: public Person {
public:
  string subject;
};

int main(){
  // Student s1;
  // s1.name = "John Doe";
  // s1.age = 21;
  // s1.rollno = 1234;
  // s1.getInfo();

  // MULTILEVEL INHERITANCE 
  // Gradstudent s1;
  // s1.name = "Tony Stark";
  // s1.researchArea = "AI is danger or Useful";
  // cout << "Name: " << s1.name << endl;
  // cout << "Research Area: " << s1.researchArea << endl;



  // MULTIPLE INHERITANCE 
  // TA t1;
  // t1.name = "GOOGLE";
  // t1.subject = "just keep in head who says you will never gonna crack that";

  // cout << "Name: " << t1.name << endl;
  // cout << "Subject: " << t1.subject << endl;

  // HIERARCHICAL INHERITANCE 
  Teacher t1;
  t1.name = "Tony stark";
  t1.age = 21;
  t1.subject = "AI";

  cout << "Name: " << t1.name << endl;
  cout << "Age: " << t1.age << endl;
  cout << "Subject: " << t1.subject << endl;
  return 0;
}