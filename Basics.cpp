#include <bits/stdc++.h>
#include <set>
#include <unordered_map>
#include <vector>
using namespace std;


// int appearNumberOnce(int number, int arr[], int num){
//   int cnt = 0;
//   for (int i = 0; i < num; i++)
//   {
//     if (arr[i] == number){
//       cnt+=1;
//     }
    
//   }
//   return cnt;
  
// }

// int main(){
//   int num, number;
//   cout << "Enter no of elements: ";
//   cin >> num;

//   int arr[num];
//   cout << "Enter array elements: " << endl;
//   for (int i = 0; i < num; i++) {
//     cin >> arr[i];
//   }

//   cout << "Enter element count u want to search: ";
//   cin >> number;

//   int appearOnce = appearNumberOnce(number, arr, num);
//   cout << "The number " << number << " appears " << appearOnce << " times." << endl;
//   return 0;
// }


// USING MAP 

// int main(){
//   int n;
//   cout << "Enter no of elements: ";
//   cin >> n;

//   int arr[n];
//   cout << "Enter array elements: " << endl;

//   // pre-order for map
//   // map<int, int> mpp;

//   // suppose if i use unordered_map then it will give unordered elements 
//   // Frequencies:
//   // 4 -> 1
//   // 12 -> 1
//   // 2 -> 2
//   // 1 -> 1 like this

//   // pre-order for unordered map
//   unordered_map<int, int> mpp;

//   for (int i = 0; i < n; i++)
//   {
//     cin >> arr[i];
//     mpp[arr[i]]++;
//   }
  
//   // iterate in the map 
//   cout << "Frequencies:\n";
//     unordered_map<int, int>::iterator it;
//     for (it = mpp.begin(); it != mpp.end(); ++it) {
//         cout << it->first << " -> " << it->second << endl;
//     }
  

//   int q;
//     cout << "Enter number of queries: ";
//     cin >> q;

//     while (q--) {
//         int number;
//         cout << "Enter number to find frequency: ";
//         cin >> number;
//         cout << "Frequency of " << number << " is: " << mpp[number] << endl;
//     }

//     return 0;
// }


// LOWER BOUND IN AN ARRAY USING LINEAR SEARCH 
// int lowerBound(vector<int> &arr, int target) {
//     int n = arr.size();
	
//     for (int i = 0; i < n; ++i) {

//       	if(arr[i] >= target) {
//           	return i;
//         }
//     }
//   	return n;
// }

// int main() {
//     vector<int> arr = {2, 3, 7, 10, 11, 11, 25};
//     int target = 9;
//     int lb;

//     cout << lowerBound(arr, target);
//     return 0;
// }


// USING BINARY SEARCH 
// int lowerBound(vector<int> &arr, int target){
//     int lo = 0,   hi = arr.size() - 1;
//     int res = arr.size();

//     while (lo <= hi)
//     {
//       int mid = (lo + hi) / 2;
//         if(arr[mid] >= target){
//           res = mid;
//           hi = mid - 1;
//         }
//         else{
//           lo = mid + 1;
//         }
//     }
//     return res;
// }

// int main() {
//     vector<int> arr = {2, 3, 7, 10, 11, 11, 25};
//     int target = 26;

//     cout << lowerBound(arr, target);
//     return 0;
// }

// FOR UPPER BOUND 
// int lowerBound(vector<int> &arr, int target){
//     int low = 0,  high = arr.size() - 1;
//     int res = arr.size();

//     while (low <= high)
//     {
//       int mid = (low + high) / 2;
//         if(arr[mid] > target){
//           res = mid;
//           high = mid - 1;
//         }
//         else{
//           low = mid + 1;
//         }
//     }
//     return res;
// }


// int main() {
//     vector<int> arr = {2, 3, 7, 10, 11, 11, 25};
//     int target = 25;

//     cout << lowerBound(arr, target);
//     return 0;
// }


// class BankAccount {
// private:
//     double balance;  // private variable

// public:
//     BankAccount(double b) { balance = b; }

//     void deposit(double amount) { balance += amount; }

//     double getBalance() { return balance; }
// };

// int main() {
//     BankAccount acct(1000);
//     acct.deposit(500);
//     cout << acct.getBalance();  // 1500
//     return 0;
// }


class BankAccount {
private:
    double balance;  // private, cannot be accessed directly

public:
    void setBalance(double b) {
        if (b >= 0)
            balance = b;
    }

    double getBalance() {
        return balance;
    }
};

int main() {
    BankAccount account;
    account.setBalance(5000);
    cout << "Balance: " << account.getBalance() << endl;
    return 0;
}