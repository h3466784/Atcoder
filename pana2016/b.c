#include <stdio.h>

int main(void)
{
  long long H, W;
  scanf("%lld %lld", &H, &W);

  if (H==1 || W==1) {
    printf("%d\n", 1);
  } else {
    printf("%lld\n", (H*W+1)/2);
  }
}
