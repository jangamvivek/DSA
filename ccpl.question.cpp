
#include <bits/stdc++.h>
using namespace std;
// sum of all elements in array 

int main(){
  
  int n;

  cout << "Enter number of elements: ";
  cin >> n;

  int arr[n];

  cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    cout << "Sum of all elements = " << sum << endl;
    return 0;
  return 0;
}


// Double the values of all elements in an array. 
