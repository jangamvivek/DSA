/////////////////////////Basic Math count digits

#include <bits/stdc++.h>
using namespace std;

// DIGIT COUNT CODE 
// int main(){

//   int num;
//   int count = 0;

//   cout << "Enter an numbers: ";
//   cin >> num;

//   num = abs(num);

//   if(num == 0){
//     count = 1;
//   }else{
//     while (num!=0)
//     {
//       num/=10;
//       count++;
//     }
//   }
//   cout << "number of digits: " << count << endl;
//   return 0;
// }


// REVERSED NO CODE

// int main(){
//   int num, reversed = 0;
//   cout << "enter an number: ";
//   cin >> num;

//   int original = num;
//   int sign = (num < 0) ? -1 : 1;
//     num = abs(num);
//   while (num !=0)
//   {
//     int digit = num % 10;
//     reversed = reversed * 10 + digit;
//     num/=10;

//   }
//   reversed *= sign;
//   cout << "Reversed number: " << reversed << endl;

//     return 0;
// }


// PALINDROM CODE 

// int main() {
//     int num, reversed = 0;
    
//     cout << "Enter a number: ";
//     cin >> num;

//     int dup = num;  // Now dup stores the original input
//     int original = num;
//     int sign = (num < 0) ? -1 : 1;
//     num = abs(num);

//     while (num != 0) {
//         int digit = num % 10;
//         reversed = reversed * 10 + digit;
//         num /= 10;
//     }

//     reversed *= sign;  // Reapply the sign if needed

//     if (dup == reversed)
//         cout << "true";
//     else
//         cout << "false";

//     return 0;
// }


// PRINT DIVISORS

// void printDivisors(int n){

//   for (int i = 1; i <= n; i++){
//     if (n % i == 0){
//       cout << i << " ";
//     }
//   }
// }

// void printPrime(int n){
//   int cnt = 0;
//   for (int i = 1; i * i <=n; i++){
//     if (n % i == 0){
//       cnt++;
//       if((n/i) != i)cnt++;
//     }
//   }
//   if(cnt == 2)cout << "prime no";
//   else cout << "not prime";
// }
// int main(){

//   int n;
//   cin >> n;
//   printPrime(n);
//   return 0;
// }






