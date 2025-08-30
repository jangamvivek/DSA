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

// void fun4(int n){
//   for (int i = 1; i <= n; i++)
//   {
//     for (int j = 1; j <= i; j++)
//     {
//       cout << i << " ";
//     }
//     cout << endl;
//   }
  
// }
// int main(){
//   int n;
//   cin >> n;
//   fun4(n);
// }


// void fun5(int n){
//   for (int i = 1; i <= n; i++)
//   {
//     for (int j = 0; j < n-i+1; j++)
//     {
//       cout << "* ";
//     }
//     cout << endl;
//   }
  
// }
// int main(){
//   int n;
//   cin >> n;
//   fun5(n);
// }


// void fun6(int n){
//   for (int i = 1; i <= n; i++)
//   {
//     for (int j = 1; j < n-i+1; j++)
//     {
//       cout << j <<" ";
//     }
//     cout << endl;
//   }
  
// }
// int main(){
//   int n;
//   cin >> n;
//   fun6(n);
// }

// void fun7(int n){
//   for (int i = 0; i < n; i++)
//   {
//     //space 
//     for (int j = 0; j < n-i-1; j++)
//     {
//       cout <<" ";
//     }
//     //stars
//     for (int j = 0; j < 2*i+1; j++)
//     {
//       cout <<"*";
//     }
//     //space
//     for (int j = 0; j < n-i-1; j++)
//     {
//       cout <<" ";
//     }
//     cout << endl;
//   } 
// }

// int main(){
//   int n;
//   cin >> n;
//   fun7(n);
// }


// void fun8(int n){
//   for (int i = 0; i < n; i++)
//   {
//     //space 
//     for (int j = 0; j < i; j++)
//     {
//       cout <<" ";
//     }
//     //stars
//     for (int j = 0; j < 2*n - ( 2 * i + 1); j++)
//     {
//       cout <<"*";
//     }
//     //space
//     for (int j = 0; j < i; j++)
//     {
//       cout <<" ";
//     }
//     cout << endl;
//   } 
// }

// int main(){
//   int n;
//   cin >> n;
//   fun8(n);
// }

void fun10(int n){
  for (int i = 1; i <= 2 * n-1; i++){
    int stars = i;
    if(i > n) stars = 2*n-i;
    for (int j = 1; j<= stars; j++)
    {
      cout << "*";
    }
    cout << endl; 
  }
}

int main(){
  int n;
  cin >> n;
  fun10(n);
}

