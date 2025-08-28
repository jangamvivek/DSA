#include<bits/stdc++.h>
using namespace std;
// void fun1(int n){
//   for (int i = 0; i < n; i++)
//   {
//     for (int j = 0; j < n; j++)
//     {
//       cout << "*";
//     }
//     cout << endl;
//   }
  
// }
// int main(){
//   int n;
//   cin >> n;
//   fun1(n);
// }


// void fun2(int n){
//   for (int i = 0; i < n; i++)
//   {
//     for (int j = 0; j <= i; j++)
//     {
//       cout << "* ";
//     }
//     cout << endl;
//   }
  
// }
// int main(){
//   int n;
//   cin >> n;
//   fun2(n);
// }


// void fun3(int n){
//   for (int i = 1; i <= n; i++)
//   {
//     for (int j = 1; j <= i; j++)
//     {
//       cout << j << " ";
//     }
//     cout << endl;
//   }
  
// }
// int main(){
//   int n;
//   cin >> n;
//   fun3(n);
// }

void fun4(int n){
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << i << " ";
    }
    cout << endl;
  }
  
}
int main(){
  int n;
  cin >> n;
  fun4(n);
}