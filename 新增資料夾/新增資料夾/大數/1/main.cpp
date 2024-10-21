#include<stdio.h>
int d[5001][2000] = { 0 };
int main()
{

 d[1][0] = 1;
 int i, j;
 for (i = 2; i <= 5000; i++)/*大數運算 運算方法如下,先算出5000項,設定每項最大2000個位數*/
 {
  for (j = 0; j < 2000; j++)
  {
   d[i][j] += d[i - 1][j] + d[i - 2][j];
   d[i][j + 1] += d[i][j] / 10;
   d[i][j] %= 10;
  }
 }

 int n;
 while (scanf("%d", &n) != EOF)
 {
  //printf("The Fibonacci number for %d is ", n);

  for (i = 1999; i >= 0; i--) /*第n項的橫排陣列 從最後一個開始讀取*/
  {
   if (d[n][i] != 0)
    break;
  }
  if (i == -1)  /*當n=1時的輸出*/
   printf("0");
  else
   for (; i >= 0; i--)
    printf("%d", d[n][i]);  /*倒輸出整個橫排*/
  printf("\n");
 }
 return 0;
}
