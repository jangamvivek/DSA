// 1. sum of all elements in an array

// let arr = [1,2,4,5,7]

// let sum = 0

// for(let i=0; i<arr.length; i++){
//   sum+=arr[i]
// }
// console.log(sum);

// 2. Dobule the value of all elements in an array

// let arr = [1,2,4,5,7]

// let arr1 = 0

// for(let i = 0; i < arr.length; i++){
  
//   arr1 = arr[i]*2;
//   console.log(arr1);
// }

// 3. Merge two objects, giving preference to values from the second object.
// const obj1 = { a: 1, b: 2, c: 3 };
// const obj2 = { b: 20, d: 4 };

// const merged = { ...obj1, ...obj2 };
// console.log(merged);


// 4. Flatten a deeply nested array.
// const nested = [1,[2,[3,[4,5]]]];
// console.log(nested);

// 5. Find the maximum product of two numbers in an array. using bubble sort
// let arr = [2, 54, 23, 5, 55];

// for (let i = 0; i < arr.length - 1; i++) {
//   for (let j = 0; j < arr.length - 1 - i; j++) {
//     if (arr[j] > arr[j + 1]) {
//       // Swap arr[j] and arr[j + 1]
//       let temp = arr[j];
//       arr[j] = arr[j + 1];
//       arr[j + 1] = temp;
//     }
//   }
// }

// console.log("Sorted Array:", arr);

// 5. Find the maximum product of two numbers in an array.
// let arr = [2, 5, 7, 8, 10]; // already sorted
// let product = arr[arr.length - 1] * arr[arr.length - 2];
// console.log("Product of last two elements:", product);


// 6. Find the product of all elements in an array.
// let arr = [1,2,3,4,5]
// let product = 1;
// for(let i = 0; i < arr.length; i++){
//   product *= arr[i];
// }
// console.log('product of all elements',product);

// 7. Replace negative numbers with zero in an array.
// let arr = [1,2,-1,3,-2]
// for (let i = 0; i < arr.length; i++){
//   if(arr[i] < 0){
//     arr[i] = 0;
//   }
// }
// console.log("replaced array", arr);


// 8. Remove keys with falsy values from an object.
// const obj1 = { a: false, b: 0, c: 3 };
// for(let key in obj1){
//   if(!obj1[key])
//   delete obj1[key]
// }
// console.log(obj1);

// 9. Find the maximum depth of a nested array.
// function getMaxDepth(arr){
//   let maxDepth = 0;

//   for (let i = 0; i < arr.length; i++) {
//     if (Array.isArray(arr[i])) {
//       // Recursively find the depth of the nested array
//       let depth = getMaxDepth(arr[i]);
//       // Update maxDepth if this depth is greater
//       if (depth > maxDepth) {
//         maxDepth = depth;
//       }
//     }
//   }

//   // Add 1 for the current level
//   return maxDepth + 1;
// }

// const arr = [1,[2,[3,[4,5]]]];
// console.log(getMaxDepth(arr));


// 10. Convert an array of objects to an array of their specific property values.

// const users = [
//   { name: "Vivek", age: 23 },
//   { name: "Riya", age: 21 },
//   { name: "Amit", age: 25 }
// ];

// let arr = []

// for(let i = 0; i < users.length; i++){
//   arr.push(users[i].name);
// }
// console.log(arr);


// 11. Find the second largest number in an array.
// let arr = [5, 1, 9, 6, 8, 3];
// // Expected Output: 8

// function secondLargest(arr) {
//   if (arr.length < 2) {
//       return null; 
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

// console.log(secondLargest(arr)); 

// 12. Convert an array of strings to lowercase
// without built in method 

// function toLowerCaseChar(char) {
//   let ascii = char.charCodeAt(0);

//   if (ascii >= 65 && ascii <= 90) {
//     return String.fromCharCode(ascii + 32);
//   }
//   return char; 
// }

// function convertArrayToLowercase(arr) {
//   let result = [];

//   for (let str of arr) {
//     let lowerStr = '';
//     for (let i = 0; i < str.length; i++) {
//       lowerStr += toLowerCaseChar(str[i]);
//     }
//     result.push(lowerStr);
//   }

//   return result;
// }

// let input = ["Hello", "WORLD", "JavaScript"];
// let output = convertArrayToLowercase(input);
// console.log(output); 


// using built in method 
// const input = ["Hello", "WORLD", "JavaScript"];
// const output = input.map(str => str.toLowerCase())
// console.log(output); 


// 13. Check if two objects are shallowly equal.. 
// function shallowEqual(obj1, obj2) {
//     if(obj1 === obj2) return true;

//     if (typeof obj1 !== 'object' || obj1 === null ||
//       typeof obj2 !== 'object' || obj2 === null) {
//     return false;
//   }

//   const keys1 = Object.keys(obj1);
//   const keys2 = Object.keys(obj2);

//   if (keys1.length !== keys2.length) return false;

//   // Check if values are equal
//   for (let key of keys1) {
//     if (!obj2.hasOwnProperty(key) || obj1[key] !== obj2[key]) {
//       return false;
//     }
//   }

//   return true;
// }

// const a = { name: 'Vivek', age: 25 };
// const b = { name: 'Vivek', age: 25 };
// const c = { name: 'Vivek', age: 26 };

// console.log(shallowEqual(a, b)); // true
// console.log(shallowEqual(a, c)); // false


// 14. Find the sum of all numbers in a nested array. 
// function sumNestedArray(arr) {
//   let sum = 0;

//   for (let item of arr) {
//     if (Array.isArray(item)) {
//       sum += sumNestedArray(item); // Recursive call
//     } else {
//       sum += item;
//     }
//   }

//   return sum;
// }

// const nested = [1, [2, 3], [4, [5, 6]]];
// console.log(sumNestedArray(nested)); // Output: 21


// Remove all odd numbers from an array.
// let arr = [1,2,3,4,5,6,7]

// let evenNumbers = arr.filter(function(num){
//   return num%2===0;
// });

// console.log(evenNumbers);


// without built in method 
// let arr = [1,2,3,4,5,6,7]

// let result = []
// for(let i =0; i < arr.length; i++){
//   if(arr[i] % 2==0){
//     result.push(arr[i]);
//   }
// }
// console.log(result);


// Round all numbers in an array to the nearest integer.
// let arr = [1.2, 2.8, 3.5, 4.3];
// let roundedArr = [];

// for (let i = 0; i < arr.length; i++) {
//   roundedArr.push(Math.round(arr[i]));
// }
// console.log(roundedArr);



// Swap the keys and values in an object. 
// let obj = {
//   name: "John",
//   age: "30",
//   city: "New York"
// };

// let swapped = {};  // create an empty object

// for (let key in obj) {
//   let value = obj[key];
//   swapped[value] = key;
// }

// console.log(swapped);

// Count the number of arrays inside a nested array. 
// function countArrays(arr) {
//   let count = 0;

//   for (let i = 0; i < arr.length; i++) {
//     if (Array.isArray(arr[i])) { // check if element is an array
//       count++;                   // count this array
//       count += countArrays(arr[i]); // recursively count inside this array
//     }
//   }

//   return count;
// }

// const nested = [1, [2, 3], [4, [5, 6]]];
// console.log(countArrays(nested));

// Remove all empty arrays from a nested array. 
// function removeEmptyArrays(arr) {
//   let result = [];

//   for (let i = 0; i < arr.length; i++) {
//     let elem = arr[i];

//     if (Array.isArray(elem)) {
//       let cleaned = removeEmptyArrays(elem); // recursively clean nested array
//       if (cleaned.length > 0) {
//         result.push(cleaned); // only add if not empty
//       }
//     } else {
//       result.push(elem); // add non-array elements directly
//     }
//   }

//   return result;
// }

// // Example:
// const nested = [1, [], [2, 3, []], [4, [5, [], 6], []], []];
// console.log(removeEmptyArrays(nested));



// reverse a string 
// function reverseString(str){
//   let reversed=''

//   for(let i=0; i < structuredClone.length - 1; i--){
//     reversed+= str[i];

//   }
//   return reversed;
// }
// console.log(reverseString("hello")); // Output: "olleh"

// function reverseString(str) {
//   let reversed = '';
//   for (let i = str.length - 1; i >= 0; i--) {
//     reversed += str[i];
//   }
//   return reversed;
// }

// Example
// console.log(reverseString("hello")); // Output: "olleh"


// function isPalindrome(str) {
//   let left = 0;
//   let right = str.length - 1;
  
//   while (left < right) {
//     if (str[left] !== str[right]) {
//       return false;
//     }
//     left++;
//     right--;
//   }
  
//   return true;
// }

// // Example
// console.log(isPalindrome("madam")); // Output: true
// // console.log(isPalindrome("hello"));   // Output: false


// Input: [1, 5, 3, 9] => Output: 9
// function findMax(arr){
//   let min = arr[0]; // Start by assuming the first element is the max
//     for (let i = 1; i < arr.length; i++) {
//       if (arr[i] < min) {
//         max = arr[i]; // Update max if a larger value is found
//       }
//     }
//     return min;
// }


// console.log(findMax([1, 5, 3, 9]));



// Input: "hello" => Output: 2
// count vowels from string 
// function countVowel(str){
//   let count = 0;
//   let vowels = ['a', 'e', 'i', 'o','u'];
//   for(let i = 0; i<str.length; i++){
//     let ch = str[i].toLowerCase();
//     for (let j = 0; j < vowels.length; j++) {
//       if (ch === vowels[j]) {
//         count++;
//         break; // No need to check other vowels
//       }
//     }
//   }
//   return count;

// }
// console.log(countVowel("vivek"));


// Write a function to check if a number is prime

function isPrime(num) {
  if (num <= 1) return false; // 0 and 1 are not prime
  if (num === 2) return true; // 2 is the only even prime number
  if (num % 2 === 0) return false; // eliminate other even numbers

  for (let i = 3; i * i <= num; i += 2) {
    if (num % i === 0) {
      return false; // divisible by another number
    }
  }

  return true;
}

// Example
console.log(isPrime(7));  // Output: true
console.log(isPrime(10)); // Output: false
