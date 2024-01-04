#include <stdio.h>

int main(void)
{
  int a, b;
  scanf("%d %d", &a, &b);

  int digit = 0;
  int num = b;
  if (b == 0) {
    digit = 1;
  } else {
    while (num > 0) {
      num /= 10;
      digit++;
    }
  }

  for (int i=0; i<digit; i++) a *= 10;

  int flag = 0;
  for (int i=1; i<333; i++) if (a+b == i*i) flag = 1;

  if (flag) {
    printf("Yes\n");
  } else {
    printf("No\n");
  }
}
