//let data = [44,9, 6, 7, 89, 19, 34, 75, 30, 59, 72, 48];
// for (let i=0; i<data.length; i++)
//   {
//     console.log(data[i]);
//   }

// get 3rd & 4th index element
// let third = data[3];
//console.log(data[4]);

//let arr = [10, 20, 30, 40, 50];
// Expected Output: 10, 20, 30, 40, 50
// console.log(arr);

// reverse array Element
// let arr = [5, 10, 15, 20, 25];
// let arr2 = arr.reverse();
// console.log(arr2);

// sum of all elements
//let arr = [1, 2, 3, 4, 5];
// Expected Output: 15
// let sum = 0;
// for (let i=0; i < arr.length; i++)
//   {
//     sum += arr[i]
//   }
// console.log(sum);

//Find the maximum and minimum elements in an array
//let arr = [12, 45, 67, 89, 2, 34, 99];
// Expected Output: Max: 99, Min: 2

// BUILT IN METHODS
// let Max = Math.max(...arr);
// let Min = Math.min(...arr);

// console.log("Max:", Max);
// console.log("Min:", Min);

// WITHOUT BUILT IN
// let Max = arr[0];
// let Min = arr[0];

// for(let i=0; i<arr.length; i++){

//   if(arr[i]>Max){
//     max = arr[i];
//   }
//   if(arr[i]<Min){
//     min = arr[i];
//   }
// }

// console.log("Max:", max);
// console.log("Min:", min);

//Count even and odd numbers in an array
// let arr = [3, 6, 9, 12, 15, 18, 21];
// // Expected Output: Even Count: 3, Odd Count: 4
// let evenCount = 0;
// let oddCount = 0;

// for(let i=0; i<arr.length; i++){
//   if( arr[i] % 2 == 0){
//     evenCount++;
//   }
//   else{
//     oddCount++;
//   }
// }
// console.log("Even Count:", evenCount);
// console.log("Odd Count:", oddCount);



// INTERMEDIATE TRAVERSAL QUESTIONS
//Find the second largest number in an array

// let arr = [5, 1, 9, 6, 8, 3];
// // Expected Output: 8

// function secondLargest(arr) {
//   if (arr.length < 2) {
//       return null; // Not enough elements
//   }

//   let first = -Infinity, second = -Infinity;

//   for (let num of arr) {
//       if (num > first) {
//           second = first;
//           first = num;
//       } else if (num > second && num !== first) {
//           second = num;
//       }
//   }

//   return second;
// }

// console.log(secondLargest(arr)); // Output: 8


// Find all elements greater than a given number x

// let arr = [10, 25, 30, 5, 15];
// let x = 12;
// // Expected Output: [25, 30, 15]

// for (let i=0; i < arr.length; i++){
//   if( arr[i] > x){
//     console.log(arr[i]);
//   } else {

//   }
// }

//Find the frequency of each element in an array

// let arr = [1, 2, 2, 3, 3, 3, 4, 4, 4, 4];
// // Expected Output: {1: 1, 2: 2, 3: 3, 4: 4}
// count = 0;
// let frequency = {};

// for(let i=0; i < arr.length; i++){
//   frequency[arr[i]] = (frequency[arr[i]] || 0) + 1;
// }

// console.log(frequency);

// Check if an array is sorted (ascending order)
// let arr1 = [1, 2, 3, 4, 5];  // Expected Output: true
// let arr2 = [5, 3, 8, 2];  // Expected Output: false

// function checkSorted(arr){
//   for (let i=0; i < arr.length; i++){
//     if(arr[i] > arr[i + 1]){
//       return false;
//     }
//   }
//   return true;
// }
// console.log(checkSorted(arr1));
// console.log(checkSorted(arr2));

//Reverse the elements of an array without using reverse()
let arr = [1, 2, 3, 4, 5];
// Expected Output: [5, 4, 3, 2, 1]
