#include <stdio.h>

int main() {
  int colorful_balls[15];
  for (int i = 0; i < 15; i++)
    colorful_balls[i] = i;
  int size = sizeof(colorful_balls) / sizeof(colorful_balls[0]);
  printf("В коробке помещается %d шаров. \n", size);
  return 0;
}
