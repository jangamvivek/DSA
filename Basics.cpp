#include <bits/stdc++.h>
#include <set>
#include <unordered_map>
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

int main(){
  int n;
  cout << "Enter no of elements: ";
  cin >> n;

  int arr[n];
  cout << "Enter array elements: " << endl;

  // pre-order for map
  // map<int, int> mpp;

  // suppose if i use unordered_map then it will give unordered elements 
  // Frequencies:
  // 4 -> 1
  // 12 -> 1
  // 2 -> 2
  // 1 -> 1 like this

  // pre-order for unordered map
  unordered_map<int, int> mpp;

  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
    mpp[arr[i]]++;
  }
  
  // iterate in the map 
  cout << "Frequencies:\n";
    unordered_map<int, int>::iterator it;
    for (it = mpp.begin(); it != mpp.end(); ++it) {
        cout << it->first << " -> " << it->second << endl;
    }
  

  int q;
    cout << "Enter number of queries: ";
    cin >> q;

    while (q--) {
        int number;
        cout << "Enter number to find frequency: ";
        cin >> number;
        cout << "Frequency of " << number << " is: " << mpp[number] << endl;
    }

    return 0;
}