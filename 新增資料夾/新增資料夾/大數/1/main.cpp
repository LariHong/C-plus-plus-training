#include<stdio.h>
int d[5001][2000] = { 0 };
int main()
{

 d[1][0] = 1;
 int i, j;
 for (i = 2; i <= 5000; i++)/*�j�ƹB�� �B���k�p�U,����X5000��,�]�w�C���̤j2000�Ӧ��*/
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

  for (i = 1999; i >= 0; i--) /*��n������ư}�C �q�̫�@�Ӷ}�lŪ��*/
  {
   if (d[n][i] != 0)
    break;
  }
  if (i == -1)  /*��n=1�ɪ���X*/
   printf("0");
  else
   for (; i >= 0; i--)
    printf("%d", d[n][i]);  /*�˿�X��Ӿ��*/
  printf("\n");
 }
 return 0;
}
