/*
It's the academic year's end, fateful moment of your school report. The averages must be calculated. All the students come to you and entreat you to calculate their average for them. Easy ! You just need to write a script.

Return the average of the given array rounded down to its nearest integer.

The array will never be empty.

https://www.codewars.com/kata/563e320cee5dddcf77000158/train/c
*/

#include <stddef.h>

int get_average(const int *marks, size_t count){
  int total = 0;
  for (int i = 0; i < count; i++){
    total = total + marks[i];
  }
  total = total/count;
  return total;
}
