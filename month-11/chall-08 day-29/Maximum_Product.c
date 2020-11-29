/*
Task
Given an array of integers , Find the maximum product obtained from multiplying 2 adjacent numbers in the array.

Notes
Array/list size is at least 2.

Array/list numbers could be a mixture of positives, negatives also zeroes .

Input >> Output Examples
adjacentElementsProduct([1, 2, 3]); ==> return 6
Explanation:
The maximum product obtained from multiplying 2 * 3 = 6, and they're adjacent numbers in the array.
adjacentElementsProduct([9, 5, 10, 2, 24, -1, -48]); ==> return 50
Explanation:
Max product obtained from multiplying 5 * 10 = 50.

adjacentElementsProduct([-23, 4, -5, 99, -27, 329, -2, 7, -921])  ==>  return -14
Explanation:
The maximum product obtained from multiplying -2 * 7 = -14, and they're adjacent numbers in the array.

https://www.codewars.com/kata/5a4138acf28b82aa43000117/train/c
*/

#include <stddef.h>

int adjacentElementsProduct(int inputArray[], size_t input_size) 
{
  // Tạo biến product và cho nó bằng giá trị của phần tử thứ 0 * giá trị của phần tử thứ 1
  int product = inputArray[0]*inputArray[1];
  
  // Dùng vòng lặp để so sánh lần lượt các giá trị khi nhân 2 số kế tiếp nhau
  for (int i = 1; i < (int)input_size - 1; i++){
    // 2 số nào nhân lại lớn hơn product
    if(inputArray[i]*inputArray[i+1] > product){
      // Thì thay product bằng giá trị khi nhân 2 số đó
      product = inputArray[i]*inputArray[i+1];
    }
  }
  return product;
}

/*
Sample Tests:

#include <criterion/criterion.h>
#include <stddef.h>

int adjacentElementsProduct(int inputArray[], size_t input_size);

Test(Max_adjacent_Product, Positive_Numbers) 
{
  cr_assert_eq(adjacentElementsProduct((int[]){5, 8},2), 40);
  cr_assert_eq(adjacentElementsProduct((int[]){1,2,3},3), 6);
  cr_assert_eq(adjacentElementsProduct((int[]){1,5,10,9},4), 90);
  cr_assert_eq(adjacentElementsProduct((int[]){4,12,3,1,5},5), 48);
  cr_assert_eq(adjacentElementsProduct((int[]){5,1,2,3,1,4},6), 6);
}

Test(Max_adjacent_Product, Mixed_Values) 
{
  cr_assert_eq(adjacentElementsProduct((int[]){3,6,-2,-5,7,3},6), 21);
  cr_assert_eq(adjacentElementsProduct((int[]){9, 5, 10, 2, 24, -1, -48},7), 50);
  cr_assert_eq(adjacentElementsProduct((int[]){5, 6, -4, 2, 3, 2, -23},7), 30);
  cr_assert_eq(adjacentElementsProduct((int[]){-23, 4, -5, 99, -27, 329, -2, 7, -921},9), -14);
  cr_assert_eq(adjacentElementsProduct((int[]){5,1,2,3,1,4},6), 6);
}

Test(Max_adjacent_Product, Containg_Zeroes) 
{
  cr_assert_eq(adjacentElementsProduct((int[]){1,0,1,0,1000},5), 0);
  cr_assert_eq(adjacentElementsProduct((int[]){1,2,3,0},4), 6);
}

*/
