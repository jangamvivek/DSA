#include <bits/stdc++.h>
using namespace std;

// int cnt = 0;

// void f(){
//   if(cnt == 4)
//     return;
//   cout << cnt << endl;
//   cnt++;
//   f();
// }

// int main(){
//   f();
//   return 0;
// }

// print string n times  
// void f(int i, int n) {
//     if (i > n) return;

//     cout << "Vivek" << endl;
//     f(i + 1, n);
// }

// int main() {
//     int n;
//     cin >> n;
//     f(1, n); // Start from i = 1
//     return 0;
// }

// print numbers from 1 to N 
// void f(int i, int n) {
//     if (i > n) return;
//     cout << i << endl;
//     f(i + 1, n);
// }

// int main(){
//     int n;
//     cin >> n;
//     f(1, n);
//     return 0;
// }



//sum of first N numbers using recursion
// paramterised
// void f(int i, int sum){
//   if (i < 1){
//     cout << sum << endl;
//     return;
//   }
//   f(i-1, sum + i);
// }
// int main(){
//   int n;
//   cin >> n;
//   f(n, 0);
//   return 0;
// }

// functional 
// int f(int n){
//   if (n == 0) return 0;
//   return n + f(n-1);
// }
// int main(){
//   int n;
//   cin >> n;
//   cout << f(n) << endl;
//   return 0;
// }


// factorial of first N number using functional

// int fact(int n){
//   if (n == 0) return 1;
//   return n * fact(n-1);
// }
// int main(){
//   int n;
//   cin >> n;
//   cout << fact(n) << endl;
//   return 0;
// }


// nth fibonacci number 
// int nthFibonacci(int n){
//     if (n <= 1)
//         return n;

//     vector<int> dp(n + 1);
//     dp[0] = 0;
//     dp[1] = 1;

//     for (int i = 2; i <= n; ++i){
//         dp[i] = dp[i - 1] + dp[i - 2];
//     }
//     return dp[n];
// }

// int main(){
//     int n = 6;
//     int result = nthFibonacci(n);

//     cout << result << endl;

//     return 0;
// }

// another way for fibonacci series number
int f(int n){
    if(n<=1) return n;
    int last = f(n-1);
    int slast = f(n-2);
    return last + slast;
}
int main(){
    cout << f(4) << endl;
}

// sum of first n natural numbers 
// int sumOfNaturalNumbers(int n){
//     if(n==1)
//         return 1;

//     return n + sumOfNaturalNumbers(n-1);
// }

// int main(){
//     int n = 2;
//     int result = sumOfNaturalNumbers(n);

//     cout << "Sum of first " << n << " natural numbers is: " << result << endl;
//     return 0;
// }

// exponential power of numbers 
// int power(int a, int b){
//     if(b==0)
//         return 1;

//     return a * power(a, b - 1);
// }

// int main(){
//     int a=2;
//     int b=2;
//     cout << a << "^" << b << " = " << power(a, b) << endl;
//     return 0;
// }

// palindrome string check 
// int isPalindrome(string s, int start, int end){
//     if (start >= end)
//         return true;
    
//     if (s[start] != s[end])
//         return false;

//     return isPalindrome(s, start + 1, end - 1);
// }

// int main(){
//     string str = "viv";
//     bool result = isPalindrome(str, 0, str.length() - 1);
//     if(result)
//         cout << "true" << endl;
//     else
//         cout << "false" << endl;
//     return 0;
// }

// bool f(int i, string &s){
//     if(i >= s.size() / 2) return true;
//     if(s[i] != s[s.size()-i-1]) return false;
//     return f(i+1, s);
// }
// int main(){
//     string s = "madam";
//     cout << f(0, s);
//     return 0;
// }


// Sum of first n numbers 
// void f(int i, int sum){
//     if(i < 1){
//         cout << sum << endl;
//         return;
//     }
//     f(i-1, sum + i);
// }

// int main(){
//     int n;
//     cin >> n;
//     f(n,0);
//     return 0;
// }


// factorial of n numbers 
// int factorial(int n){
//     if(n == 0 | n == 1){
//         return 1;
//     }
//     return n * factorial(n - 1);
// }

// int main(){
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;
//     if(n < 0){
//         cout << "Factorial is not defined for negative numbers.";
//     }
//     else{
//         cout << "Factorial = " << factorial(n) << endl;
//     }

//     return 0;
// }


// Swapping array elements using recurssion 
// void f(int i, int arr[], int n) {
//     if (i >= n / 2) return;
//     swap(arr[i], arr[n - i - 1]);
//     f(i + 1, arr, n);
// }

// int main() {
//     int n;
//     cin >> n;

//     int arr[n]; 
//     for (int i = 0; i < n; i++) cin >> arr[i];

//     f(0, arr, n);

//     for (int i = 0; i < n; i++) cout << arr[i] << " ";
//     cout << endl;
//     return 0;
// }
