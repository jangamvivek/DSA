#include <bits/stdc++.h>
#include <set>
#include <vector>
#include <unordered_map>
using namespace std;


// selection sort 
// int selection_sort(int arr[], int n){
//   for(int i=0; i <= n-2; i++){
//     int min = i;
//     for(int j = i + 1; j < n; j++){
//        if(arr[j] < arr[min]){
//         min = j;
//        }
//     }
//     int temp = arr[min];
//     arr[min] = arr[i];
//     arr[i] = temp;
//   }
//   return 0;
// }

// int main(){
//   int n;
//   cin >> n;
//   int arr[n];
//   for(int i = 0; i < n; i++) 
//   cin >> arr[i];
//   selection_sort(arr, n);
//   for(int i=0; i < n; i++){
//     cout << arr[i] << " ";
//   }
//   return 0;
// }


// BUBBLE SORT 
void bubble_sort(int arr[], int n){
  for(int i = n - 1; i >=0; i--){
    int didSwap = 0;
    for(int j = 0; j <= i - 1; j++){
       if(arr[j] > arr[j + 1]){
         int temp = arr[j + 1];
         arr[j+1] = arr[j];
         arr[j] = temp;
         didSwap = 1;
       }
    }
    if (didSwap == 0){
      break;
    }
  }
}

int main(){
  int n;
  cin >> n;
  int arr[n];
  for(int i = 0; i < n; i++) cin >> arr[i];
  bubble_sort(arr, n);
  for(int i=0; i < n; i++){
    cout << arr[i] << " ";
  }
  return 0;
}

// INSERTION SORT 
// void insertion_sort(int arr[], int n){
//   for (int i = 0; i < n-1; i++){
//     int j = i;
//     while (j > 0 && arr[j-1] > arr[j]){
//       int temp = arr[j-1];
//       arr[j-1] = arr[j];
//       arr[j] = temp;
//       j--;
//       cout << "Runs ";
//     }
//   }
  
// }

// int main(){
//   int n;
//   cin >> n;
//   int arr[n];
//   for(int i = 0; i < n; i++) cin >> arr[i];
//   insertion_sort(arr, n);
//   for(int i=0; i < n; i++){
//     cout << arr[i] << " ";
//   }
//   return 0;
// }


// RECURSIVE BUBBLE SORT 
// void recursiveBubbleSort(int arr[], int n) {
//     // Base case
//     if (n == 1) return;

//     int didSwap = 0;
//     // One pass of bubble sort
//     for (int i = 0; i < n - 1; i++) {
//         if (arr[i] > arr[i + 1]) {
//             // Swap
//             int temp = arr[i];
//             arr[i] = arr[i + 1];
//             arr[i + 1] = temp;
//             didSwap = 1;
//             cout << "Runs ";
//         }
//     }

//     if(didSwap == 0) return;
//     // Recursive call for remaining elements
//     recursiveBubbleSort(arr, n - 1);
// }

// int main(){
//   int n;
//   cin >> n;
//   int arr[n];
//   for(int i = 0; i < n; i++) cin >> arr[i];
//   recursiveBubbleSort(arr, n);
//   for(int i=0; i < n; i++){
//     cout << arr[i] << " ";
//   }
//   return 0;
// }

// RECURSIVE INSERTION SORT 
// void recursiveInsertionSort(int arr[], int n) {
//     // Base case
//     if (n == 1) return;

//     recursiveInsertionSort(arr, n - 1);
    
//     // insert last element at its current position 
//     int last = arr[n-1];
//     int j = n-2;

//     // shift elements greater than last to one position ahead 
//     while (j > 0 && arr[j] > last){
//       arr[j+1] = arr[j];
//       j--;
//     }

//     arr[j+1] = last;
// }

// int main(){
//   int n;
//   cin >> n;
//   int arr[n];
//   for(int i = 0; i < n; i++) cin >> arr[i];
//   recursiveInsertionSort(arr, n);
//   for(int i=0; i < n; i++){
//     cout << arr[i] << " ";
//   }
//   return 0;
// }