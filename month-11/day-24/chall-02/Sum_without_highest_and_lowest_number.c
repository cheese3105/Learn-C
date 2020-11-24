/*
Sum all the numbers of the array (in F# and Haskell you get a list) except the highest and the lowest element (the value, not the index!).
(The highest/lowest element is respectively only one element at each edge, even if there are more than one with the same value!)

Example:

{ 6, 2, 1, 8, 10 } => 16
{ 1, 1, 11, 2, 3 } => 6

If array is empty, null or None, or if only 1 Element exists, return 0.

https://www.codewars.com/kata/576b93db1129fcf2200001e6/train/c
*/

#include <stdio.h>

int sum(int* numbers, int numbersCount)
{
  //Nếu mảng không có số nào hoặc chỉ có một số thì return 0
  if (numbersCount <= 1){
    return 0;
  }
  else {
    //Tạo biến 2 min, max và gán cho 2 biến min, max giá trị đầu tiên trong mảng numbers
    int max, min;
    max = numbers[0];
    min = numbers[0];
    //Tìm số lớn nhất và số bé nhất trong mảng numbers
    for (int i = 1; i < numbersCount; i++){
      if (max < numbers[i]){
        max = numbers[i];
      }
      if (min > numbers[i]){
        min = numbers[i];
      }
    }  
    
    //Tạo biến total để tính tổng
    int total = 0;
    //Dùng vòng lặp for để cộng tất cả các số trong mảng numbers
    for (int i = 0; i < numbersCount; i++){
      total = total + numbers[i];
    }
    //Lấy tổng trừ đi số lớn nhất và số nhỏ nhất để được kết quả cần tìm
    total = total - max - min;
    return total;
  }
}
