#include <stdio.h>

int main(void)
{
  int score = 4;
  switch(score) {
    case 1:
      printf("もっと頑張りましょう\n");
      break;
    case 2:
      printf("もう少し頑張りましょう\n");
      break;
    case 3:
      printf("普通です\n");
      break;
    case 4:
      printf("良くできました\n");
      break;
    case 5:
      printf("大変良くできました\n");
      break;
    default:
      printf("入力ミスです\n");
  }
  printf("switchブロックを抜けました\n");
}