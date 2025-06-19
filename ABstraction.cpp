#include <bits/stdc++.h>
using namespace std;

// class Shape { //abstract class 
//   virtual void draw() = 0;  //pure virtual function
// };

// class Circle : public Shape {
//   public:
//     void draw() {
//       cout << "drawing a circle\n"; 
//     }
// };



// STATIC KEYWORD CODE 
void fun(){
  static int x = 0;
  cout << "x is : " << x << endl;
  x++;
}

int main(){
  fun();
  fun();
  fun();
  return 0;
}