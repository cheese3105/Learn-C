/*Scenario
Several people are standing in a row divided into two teams. The first person goes into team 1, the second goes into team 2, the third goes into team 1, and so on.

Task
Given an array of positive integers (the weights of the people), return a new array/tuple of two integers, where the first one is the total weight of team 1, and the second one is the total weight of team 2.

Notes
Array size is at least 1.
All numbers will be positive.
Input >> Output Examples
rowWeights([13, 27, 49])  ==>  return (62, 27)
Explanation:
The first element 62 is the total weight of team 1, and the second element 27 is the total weight of team 2.

rowWeights([50, 60, 70, 80])  ==>  return (120, 140)

https://www.codewars.com/kata/5abd66a5ccfd1130b30000a9/train/c
*/


void rowWeights(const int weights[], int count, int teams[])
{
  //phân chia các phần tử dựa trên vị trí của phần tử là chẵn hay lẻ
  for (int i = 1; i < count; i++){
    //nếu vị trí của phẩn tử là số lẻ thì cộng giá trị của phần tử vào teams[1]
    if (i % 2 == 1){
      teams[1] += weights[i]; 
    }
    //nếu vị trí của phần tử là số chẵn thì cộng giá trị của phần tử vào teams[0]
    else {
      teams[0] += weights[i];
    }
  }
  printf("%d, %d",teams[0], teams[1]);
  return;
}

/*
Sample Tests:

#include <criterion/criterion.h>

void rowWeights(const int weights[], int count, int teams[]);
void doTest(const int weights[], int count, int expected[]);

#define RUN_TEST(arr,exp) doTest((arr), sizeof(arr)/sizeof((arr)[0]), (exp));

Test(Row_Weights, Basic_Tests)
{
    {
        int arr[] = {80},
            exp[] = {80,0};
        RUN_TEST(arr, exp);
    }
    {
        int arr[] = {100,50},
            exp[] = {100,50};
        RUN_TEST(arr, exp);
    }
    {
        int arr[] = {50,60,70,80},
            exp[] = {120,140};
        RUN_TEST(arr, exp);
    }
}
Test(Row_Weights, Odd_Vector_Length)
{
    {
        int arr[] = {13,27,49},
            exp[] = {62,27};
        RUN_TEST(arr, exp);
    }
    {
        int arr[] = {70,58,75,34,91},
            exp[] = {236,92};
        RUN_TEST(arr, exp);
    }
    {
        int arr[] = {29,83,67,53,19,28,96},
            exp[] = {211,164};
        RUN_TEST(arr, exp);
    }
}
Test(Row_Weights, Even_Vector_Length)
{
    {
        int arr[] = {100,50},
            exp[] = {100,50};
        RUN_TEST(arr, exp);
    }
    {
        int arr[] = {100,51,50,100},
            exp[] = {150,151};
        RUN_TEST(arr, exp);
    }
    {
        int arr[] = {39,84,74,18,59,72,35,61},
            exp[] = {207,235};
        RUN_TEST(arr, exp);
    }
}
void doTest(const int weights[], int count, int expected[])
{
    int teams[2] = { 0 };
    rowWeights(weights, count, teams);
    cr_assert_eq(teams[0], expected[0], "Team 1: expected %d, but received %d", expected[0], teams[0]);
    cr_assert_eq(teams[1], expected[1], "Team 2: expected %d, but received %d", expected[1], teams[1]);
}
*/
