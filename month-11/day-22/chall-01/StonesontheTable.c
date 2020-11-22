unsigned solution(const char *stones) {
  int sol = 0; //sol là số ký tự cần phải bỏ ra
  char a; 
  a = stones[0]; //gán ký tự đầu tiên của chuỗi vào a
  for(int i = 1; i<strlen(stones); i++) //dùng for để duyệt qua từng ký tự trong chuỗi
    {
      if (a == stones[i]) //nếu ký tự sau giống với ký tự trước đó
        {  sol++;  }//thì sol + 1 tức là bỏ đi ký tự đằng trước
      a = stones[i];//thay a bằng ký tự đằng sau
    }//tiếp tục thực hiện đến hết chuỗi
  return sol;          
}
