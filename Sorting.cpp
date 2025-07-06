#include <bits/stdc++.h>
#include <set>
#include <vector>
#include <unordered_map>
using namespace std;


// selection sort 
int selection_sort(int arr[], int n){
  for(int i=0; i <= n-2; i++){
    int mini = i;
    for(int j=1; j <= n - 1; j++){
       if(arr[j] < arr[mini]){
        mini = j;
       }
    }
    int temp = arr[mini];
    arr[mini] = arr[i];
    arr[i] = temp;
  }

  return 0;
}

int main(){
  int n;
  cin >> n;
  int arr[n];
  for(int i = 0; i < n; i++) cin >> arr[i];
  selection_sort(arr, n);
  for(int i=0; i < n; i++){
    cout << arr[i] << " ";
  }
  return 0;
}