/*
In this Kata, you will be given an array of integers whose elements have both a negative and a positive value, except for one integer that is either only negative or only positive. Your task will be to find that integer.

Examples:

[1, -1, 2, -2, 3] => 3

3 has no matching negative appearance

[-3, 1, 2, 3, -1, -4, -2] => -4

-4 has no matching positive appearance

[1, -1, 2, -2, 3, 3] => 3

(the only-positive or only-negative integer may appear more than once)

Good luck!

https://www.codewars.com/kata/5a092d9e46d843b9db000064/train/c
*/

#include <stddef.h>

int solve(size_t n, const int array[n]) {
  // Tạo một biến flag và cho nó = 0
  int flag = 0;
  // Xét phần tử đầu tiên trong mảng
  for(int i = 0; i < n; i++) {
    // So sánh với từng phẩn tử trong mảng
    for(int j = 0; j < n; j++) {
      // Nếu có số đối của phần tử trong mảng
      if (array[j] == - array[i]) {
        // Thì cho flag = 1 và dùng break thoát khỏi vòng lặp
        flag = 1;
        break;
      }
    }
    // Sau khi so sánh hết với các phần tử trong mảng mà flag vẫn = 0
    if (flag == 0) {
      // Nghĩa là phần tử thứ i đó không có số đối trong mảng
      return array[i];
    }
    // Code chạy đến dòng này nghĩa là phần tử thứ i có số đối trong mảng
    // => Đặt lại flag = 0 rồi xét tiếp
    flag = 0;
  }
  return 0;
}

/*
Sample Tests:

#include <criterion/criterion.h>

void tester(size_t n, const int array[n], int expected);

Test(Sample_Tests, should_pass_all_the_tests_provided)
{
  { const int array[5] = {1, -1, 2, -2, 3};                             tester(5, array,   3); }
  { const int array[7] = {-3, 1, 2, 3, -1, -4, -2};                     tester(7, array,  -4); }
  { const int array[6] = {1, -1, 2, -2, 3, 3};                          tester(6, array,   3); }
  { const int array[9] = {-110, 110, -38, -38, -62, 62, -38, -38, -38}; tester(9, array, -38); }
  { const int array[7] = {-9, -105, -9, -9, -9, -9, 105};               tester(7, array,  -9); }
}

*/
