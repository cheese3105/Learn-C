/*
Cách 2 thì sử dụng phép XOR
XOR là cộng bit của 2 số với nhau nếu giống nhau thì = 0, khác nhau thì = 1
Cách này chỉ áp dụng khi n lẻ
Và để cho n lẻ nên dùng được
*/ 

#include <stddef.h>

int stray(size_t n, int arr[n]) {
  int x = 0;
  for(int i = 0; i < n; i++)
    x = x ^ arr[i];
  return x;
}
