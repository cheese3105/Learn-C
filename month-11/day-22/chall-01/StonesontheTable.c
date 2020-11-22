unsigned solution(const char *stones) {
  int sol = 0;
  char a;
  a = stones[0];
  for(int i = 1; i<strlen(stones); i++)
    {
      if (a == stones[i])
        {  sol++;  }
      a = stones[i];
    }
  return sol;          
}
