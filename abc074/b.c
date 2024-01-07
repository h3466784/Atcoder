#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int N;
  scanf("%d", &N);

  int K;
  scanf("%d", &K);

  int x[N+1];
  for (int i=0; i<N; i++) scanf("%d", &x[i]);

  int sum = 0;
  for (int i=0; i<N; i++) {
    sum += 2*(abs(K-x[i])<x[i] ? abs(K-x[i]) : x[i]);
  }

  printf("%d\n", sum);
}
