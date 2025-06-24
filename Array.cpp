#include <bits/stdc++.h>
#include <set>
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

// int linearSearch(int arr[], int sz, int target){

//   for (int i = 0; i < sz; i++)
//   {
//     if (arr[i] == target)
//     {
//       return i;
//     }
    
//   }
//   return -1;
// }

// int main(){
//   int arr[] = {12,47,54,77,80,46,26,99};
//   int sz = 8;
//   int target = 99;

//   cout << linearSearch(arr, sz, target) << endl;

//   return 0;
// }


// bool isSorted(int arr[], int n) {
//     for (int i = 1; i < n; i++) {
//         if (arr[i] < arr[i - 1]) {
//             return false;
//         }
//     }
//     return true;
// }

// int main() {
//     int arr[] = {12, 47, 54, 77, 80};
//     int n;
//     cout << "Enter number of elements to check: ";
//     cin >> n;

//     if (n > sizeof(arr)/sizeof(arr[0])) {
//         cout << "Invalid input: n exceeds array size." << endl;
//         return 1;
//     }

//     if (isSorted(arr, n)) {
//         cout << "Array is sorted" << endl;
//     } else {
//         cout << "Array is NOT sorted." << endl;
//     }

//     return 0;
// }

// Removes duplicates from sorted array and prints only unique elements
// void removeDuplicates(int arr[], int n) {
//     if (n == 0) return;

//     int i = 0;
//     for (int j = 1; j < n; j++) {
//         if (arr[j] != arr[i]) {
//             i++;
//             arr[i] = arr[j];
//         }
//     }

//     // Print only the unique part of the array
//     cout << "Array after removing duplicates: ";
//     for (int k = 0; k <= i; k++) {
//         cout << arr[k] << " ";
//     }
//     cout << endl;
// }

// int main() {
//     int arr[] = {1,1,2,2,2,3,3};
//     int n = 7;
//     removeDuplicates(arr, n);
//     return 0;
// }

//Left rotate the array by one place
// void leftRotate(int arr[], int n){
//     int temp = arr[0];
//     for (int i = 1; i < n; i++)
//     {
//         arr[i-1] = arr[i];
//     }
//     arr[n-1]=temp;
//     // return arr;
// }

// int main(){
//     int arr[] = {1,2,3,4,5};
//     int n = 5;
//     leftRotate(arr, n);

//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << endl;
//     }
    
//     return 0;
// }

//Left rotate the array by D place

// void leftRotate(int arr[], int n, int d){
//     d = d % n;
//     int temp[d];

//     for (int i = 0; i < d; i++) {
//         temp[i] = arr[i]; 
//     }

//     for (int i = d; i < n; i++) {
//         arr[i - d] = arr[i]; 
//     }

//     for (int i = 0; i < d; i++) {
//         arr[n - d + i] = temp[i]; 
//     }
// }

// another method
// void leftRotate(int arr[], int n, int d){
//     reverse(arr, arr+d);
//     reverse(arr+d, arr+n);
//     reverse(arr, arr + n);
// }

// int main() {
//     int n;
//     cin >> n;
//     int arr[n];

//     for (int i = 0; i < n; i++) {
//         cin >> arr[i]; 
//     }

//     int d;
//     cin >> d;
//     leftRotate(arr, n, d);

//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }


// move all zeroes at the end of the array 

// void moveZeros(int arr[], int n){
//     int j = -1;
//     for (int i = 0; i < count; i++)
//     {
//         if (i = 0)
//         {
//             j = i;
//             break;
//         }
//     }

//     // no non zero nos 
//     if ( j == 1) return arr;

//     for (int i = j + 1; i < n; i++)
//     {
//         if (a[i] != 0)
//         {
//             swap(arr[i], arr[j]);
//             j++;
//         }
//     }
// }

// int main() {
//     int n;
//     cin >> n;
//     int arr[n];

//     for (int i = 0; i < n; i++) {
//         cin >> arr[i]; 
//     }

    
//     leftRotate(arr, n, j);

//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }

// linear search 
// int linearSearch(int arr[], int n, int num) {
//     for (int i = 0; i < n; i++) {
//         if (arr[i] == num) {
//             cout << "Element is found at position: " << i << endl;
//             return i; // return index if found
//         }
//     }
//     cout << "Element not found." << endl;
//     return -1; 
// }

// int main() {
//     int n, num;

//     cout << "Enter the number of elements: ";
//     cin >> n;

//     int arr[n];
//     cout << "Enter the elements: ";
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     cout << "Enter the number to search: ";
//     cin >> num;

//     linearSearch(arr, n, num);
//     return 0;
// }

// UNION OF TWO SORTED ARRAYS 
// void printUnion(int arr1[], int n1, int arr2[], int n2) {
//     set<int> unionSet;

//     // Insert elements of first array
//     for (int i = 0; i < n1; i++) {
//         unionSet.insert(arr1[i]);
//     }

//     // Insert elements of second array
//     for (int i = 0; i < n2; i++) {
//         unionSet.insert(arr2[i]);
//     }

//     // Print union
//     cout << "Union of the two arrays: ";
//     for (int val : unionSet) {
//         cout << val << " ";
//     }
//     cout << endl;
// }

// int main() {
//     int arr1[] = {1, 2, 4, 5};
//     int arr2[] = {2, 3, 5, 6};

//     int n1 = sizeof(arr1) / sizeof(arr1[0]);
//     int n2 = sizeof(arr2) / sizeof(arr2[0]);

//     printUnion(arr1, n1, arr2, n2);

//     return 0;
// }

// INTERSECTION OF TWO SORTED ARRAYS 
// vector<int> findArrayIntersection(vector<int> &A, vector<int> &B) {
//     vector<int> ans;
//     int n = A.size(), m = B.size();
//     int i = 0, j = 0;

//     while (i < n && j < m) {
//         if (A[i] == B[j]) {
//             ans.push_back(A[i]);
//             i++;
//             j++;
//         } else if (A[i] < B[j]) {
//             i++;
//         } else {
//             j++;
//         }
//     }
//     return ans;
// }

// int main() {
//     vector<int> A = {1, 2, 4, 5, 6};
//     vector<int> B = {2, 4, 6, 8};

//     vector<int> result = findArrayIntersection(A, B);
//     for (int num : result) {
//         cout << num << " ";
//     }
//     return 0;
// }


// MISSING NUMBER IN AN ARRAY 

// BRUTE FORCE 
// int findMissingNumber(int arr[], int n) {
//     for (int i = 1; i <= n; i++) {
//         bool found = false;
//         for (int j = 0; j < n - 1; j++) {
//             if (arr[j] == i) {
//                 found = true;
//                 break;
//             }
//         }
//         if (!found)
//             return i;
//     }
//     return -1; // If no number is missing
// }

// BETTER APPROACH 
// int findMissingNumber(int arr[], int n) {
//     int total = n * (n + 1) / 2;

//     int sum = 0;
//     for (int i = 0; i < n - 1; i++)
//     {
//         sum+=arr[i];
//     }
//     return total - sum;
     
// }


// OPTIMAL APPROACH USING XOR 
// int findMissingNumber(int arr[], int n) {
//     int xor1 = 0;
//     int xor2 = 0;

//     for (int i = 0; i < n; i++) {
//         xor1 ^= arr[i];  // XOR all elements in the array
//         xor2 ^= (i + 1); // XOR all numbers from 1 to n
//     }

//     return xor1 ^ xor2;
// }

// int main() {
//     // int arr[];
//     int n; 
    
//     cout << "Enter the value of n (range will be 1 to n): ";
//     cin >> n;

//     int arr[n - 1];  // Array size is n-1

//     cout << "Enter " << n - 1 << " numbers (from 1 to " << n << ", with one missing):" << endl;
//     for (int i = 0; i < n - 1; i++) {
//         cin >> arr[i];
//     }

//     int missing = findMissingNumber(arr, n);
//     cout << "Missing number is: " << missing << endl;

//     return 0;
// }


// MAXIMUM CONUCETIVE ONES WITH OPTIMAL SOLUTION
int firstMaxConsecutiveOnes(int arr[], int n){
    int max1 = 0;
    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        if(arr[i] == 1){
            cnt++;
            max1 = max(max1, cnt);
        }else{
            cnt = 0;
        }
    }
    return max1;
    
}

int main() {
    int n; 
    
    cout << "Enter no of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter array elements: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int firstMax = firstMaxConsecutiveOnes(arr, n);
    cout << "the count of MaxConsecutiveOnes is: " << firstMax << endl;
    return 0;
}