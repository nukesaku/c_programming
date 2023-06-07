#include <stdio.h>

int main(void)
{
  int age = 20;
  if(age < 13 || age >= 65) {
    printf("入場料は無料です\n");
  } else {
    printf("通常料金です\n");
  }
}
