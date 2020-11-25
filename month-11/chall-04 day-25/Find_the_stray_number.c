/*
You are given an odd-length array of integers, in which all of them are the same, except for one single number.

Complete the method which accepts such an array, and returns that single different number.

The input array will always be valid! (odd-length >= 3)

Examples
[1, 1, 2] ==> 2
[17, 17, 3, 17, 17, 17, 17] ==> 3

https://www.codewars.com/kata/57f609022f4d534f05000024/train/c
*/

#include <stddef.h>

int stray(size_t n, int arr[n]) {
  // Kiểm tra 3 số đầu tiên để xem số khác biệt có nằm ở 3 số đầu hay không
  // Nếu số thư 0 khác số thứ 1 thì số khác biệt nằm ở số thứ 0 hoặc số thứ 1
  if (arr[0] != arr[1]){
    // Nếu số thứ 0 khác số thứ 2
    if (arr[0] != arr[2]){
      // thì số thứ 0 là số khác biệt vì cùng khác số thứ 1 và số thứ 2
      return arr[0];
    }
    // Nếu số thứ 0 KHÔNG khác số thứ 2
    else{
      // thì số thứ 1 là số khác biệt vì số thứ 0 và thứ 2 giống nhau 
      return arr[1];
    }
  }
  
  //Nếu không phải trường hợp nào ở trên thì số thứ 0 KHÔNG PHẢI SỐ KHÁC BIỆT
  // => So sánh các số còn lại với số thứ 0 để tìm số khác biệt
  for (int i = 2; i < (int)n; i++){
    if (arr[0] != arr[i]){
      return arr[i];
    }
  }
}

/* 
Sample Test:

#include <criterion/criterion.h>
#include <stddef.h>

int stray(size_t n, int arr[n]);

Test(Sample_Cases, should_pass_all_the_tests_provided) {
  {
    int example[3] = {1, 0, 0};
    cr_assert_eq(stray(3, example), 1, "expected 1");
  }
  {
    int example[5] = {1, 1, 2, 1, 1};
    cr_assert_eq(stray(5, example), 2, "expected 2");
  }
  {
    int example[7] = {2, 2, 2, 2, 2, 2, 3};
    cr_assert_eq(stray(7, example), 3, "expected 3");
  }
}

*/
