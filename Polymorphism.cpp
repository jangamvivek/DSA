#include <bits/stdc++.h>
#include <set>
using namespace std;


// class Student {
// public:
//   string name;

//   Student(){
//     cout << "non-parameterized\n";
//   }

//   Student(string name){
//     this->name = name;
//     cout << "parameterized\n";
//   }
// };



// FUNCTION OVERLOADING
// class Print {
// public:
     
//      void show(int x){
//         cout << "Number is: " << x << endl;
//      }

//      void show(char ch){
//         cout << "what you say: " << ch << endl;
//      }
// };



// FUNCTION OVERRIDING    same name of function but different implementation
class Parent {
public: 
    void getInfo(){
      cout << "parent class" << endl;
    }
};

class Child : public Parent {
public: 
    void getInfo(){
      cout << "child class" << endl;
    }
};

int main(){
  // Student s1;
  // if i get parameters then it will call parameterized constructor 
  // Student s1("Tony stark");


  // FUNCTION OVERLOADING
    // Print p1;
    // p1.show(101);


// FUNCTION OVERRIDING 
    // Child c1;
    // c1.getInfo();
    Parent p1;
    p1.getInfo();
    return 0;
}