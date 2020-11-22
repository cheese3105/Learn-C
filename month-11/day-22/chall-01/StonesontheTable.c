/*
There are some stones on Bob's table in a row, and each of them can be red, green or blue, indicated by the characters R, G, and B.

Help Bob find the minimum number of stones he needs to remove from the table so that the stones in each pair of adjacent stones have different colours.

Examples:

"RGBRGBRGGB"   => 1
"RGGRGBBRGRR"  => 3
"RRRRGGGGBBBB" => 9

link: https://www.codewars.com/kata/5f70e4cce10f9e0001c8995a/train/c
*/

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
