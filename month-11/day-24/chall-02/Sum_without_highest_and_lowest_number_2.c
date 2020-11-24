/*
Khác với cách 1 xài đến 2 vòng lặp 
thì cách 2 chỉ cần xài 1 vòng lặp chung cho việc tìm tổng, max, min
*/
#include <stdio.h>

int sum(int* numbers, int numbersCount)
{
  //Nếu mảng không có số nào hoặc chỉ có một số thì return 0
  if (numbersCount <= 1){
    return 0;
  }
  else {
    //Tạo 2 biến min, max và gán cho 2 biến min, max giá trị đầu tiên trong mảng numbers
    int max, min;
    max = numbers[0];
    min = numbers[0];
    //Tạo biến total để tính tổng
    int total = 0;
    //Tính tổng và tìm số lớn nhất, số bé nhất trong mảng numbers
    for (int i = 0; i < numbersCount; i++){
      total = total + numbers[i];
      if (max < numbers[i]){
        max = numbers[i];
      }
      if (min > numbers[i]){
        min = numbers[i];
      }
    }  
    
    //Lấy tổng trừ đi số lớn nhất và số nhỏ nhất để được kết quả cần tìm
    total = total - max - min;
    return total;
  }
