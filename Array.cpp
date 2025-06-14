#include <bits/stdc++.h>
using namespace std;

// largest element array 
// int largestElement(vector<int> &arr, int n){
//   int largest = arr[0];
//   for (int i = 1; i < n; i++)
//   {
//     if(arr[i] > largest)
//   largest = arr[i];
//   }

//   return largest;
  
// }

// int main() {
//   int n;
//   cin >> n;
//   vector<int> arr(n);
//   for(int i = 0; i < n; i++){
//     cin >> arr[i];
//   }
//   cout << "Largest element is: " << largestElement(arr, n) << endl;
//   return 0;
// }


// smallest element array 

// int main(){
//   int nums[] = {32, 52, 1, -1, -4};

//   int size = 5;

//   int smallest = nums[0], largest = nums[0];
//   int smallest_index = 0, largest_index = 0;

//   for (int i = 0; i < size; i++)
//   {
//     if(nums[i] < smallest){
//       smallest = nums[i];
//       smallest_index = i;
//     }
//     if(nums[i] > largest){
//       largest = nums[i];
//       largest_index = i;
//     }
//   }

//   cout << "smallest number: " << smallest << " with index: " << smallest_index << endl;
//   cout << "largest number: " << largest << " with index: " << largest_index << endl;

//   return 0;
  
// }

int linearSearch(int arr[], int sz, int target){

  for (int i = 0; i < sz; i++)
  {
    if (arr[i] == target)
    {
      return i;
    }
    
  }
  return -1;
}

int main(){
  int arr[] = {12,47,54,77,80,46,26,99};
  int sz = 8;
  int target = 99;

  cout << linearSearch(arr, sz, target) << endl;

  return 0;
}