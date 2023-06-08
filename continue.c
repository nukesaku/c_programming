#include <stdio.h>

int main(void)
{
  int sum = 0;
  for(int i = 0; i <= 10; i++) {
    if (i % 2 == 0) {
      continue;
    } 
    sum += i;
    printf("変数sumに%dを加えました\n", i);
    printf("sumは%d\n", sum);
  }
}
