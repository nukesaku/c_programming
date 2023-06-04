#include <stdio.h>

int main(void)
{
  int i;
  printf("整数を入力してください\n");
  scanf("%d", &i); // キーボードから入力された整数を変数iで受け取ります
  printf("%dが入力されました\n", i);
}
