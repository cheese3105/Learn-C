/*
Cách này có ý tưởng giống cách 1 nhưng code gọn hơn
*/

int stray(size_t n, int arr[n]) {
  int i, num1;
  num1 = arr[0];
  // nếu số thứ 0 cùng khác số thứ 1 và số thứ 2 thì số thứ 0 là số khác biệt
  if(num1 != arr[1] && num1 != arr[2]) return num1;
  // nếu không phải thì nó là số bình thường    
  // so sánh các số còn lại với số thứ 0 để tìm số khác biệt
  for(i=1; i<n; i++) {
    if(num1 != arr[i]) {
      return arr[i]; 
    }
  }
}
