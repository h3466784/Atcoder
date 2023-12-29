#include <stdio.h>

int main(void)
{
  int A, B;
  scanf("%d %d", &A, &B);

  int outlet = 1, count = 0;
  while (outlet < B) {
    outlet = outlet + A - 1;
    count++;
  }

  printf("%d\n", count);
}
