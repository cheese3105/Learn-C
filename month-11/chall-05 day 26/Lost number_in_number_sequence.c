/*
An ordered sequence of numbers from 1 to N is given. One number might have deleted from it, then the remaining numbers were mixed. Find the number that was deleted.

Example:

The starting array sequence is [1,2,3,4,5,6,7,8,9]
The mixed array with one deleted number is [3,2,4,6,7,8,1,9]
Your function should return the int 5.
If no number was deleted from the array and no difference with it, your function should return the int 0.

Note that N may be 1 or less (in the latter case, the first array will be []).

https://www.codewars.com/kata/595aa94353e43a8746000120/train/c
*/

#include <stdlib.h>

int find_deleted_number(const int arr[], size_t arr_sz, const int mix_arr[], size_t mix_sz)
{
  // Tạo biến flag rồi cho nó = 0
  int flag = 0;
  // 
  for (int i = 0; i < (int)arr_sz; i++){ 
    for (int j = 0; j < (int)mix_sz; j++){
      // So sánh lần lượt từng phần tử của mảng arr với các phần tử của mảng mix
      if (arr[i] == mix_arr[j]) {
      // Nếu có phẩn tử đó trong mảng mix thì cho flag = 1 rồi dùng break để thoát khỏi vòng lặp
        flag = 1;
        break;
      }
    }
    // Sau khi chạy đoạn code trên mà flag vẫn bằng 0 tức là không có phần tử đó trong mảng mix => phần tử đó là phần tử bị mất
    if (flag == 0){
      return arr[i];
    }
    // Nếu chạy tới dòng code này nghĩa là flag = 1 => đặt lại flag = 0 để xét tiếp phần tử tiếp theo trong mảng arr
    flag = 0;
  }
  // Nếu chạy tới dòng code này nghĩa là mảng arr rỗng => return 0
  return 0;
}
