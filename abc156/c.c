#include <stdio.h>
#include <limits.h>

int main(void)
{
  int N;
  scanf("%d", &N);

  int X[N+1];
  for (int i=0; i<N; i++) scanf("%d", &X[i]);

  int X_min = X[0], X_max = X[0];
  for (int i=0; i<N; i++) {
    if (X_min > X[i]) X_min = X[i];
    if (X_max < X[i]) X_max = X[i];
  }

  int cost_min = INT_MAX;
  for (int p=X_min; p<=X_max; p++) {
    int sum = 0;
    for (int i=0; i<N; i++) sum += (X[i] - p)*(X[i] - p);
    if (cost_min > sum) cost_min = sum;
  }

  printf("%d\n", cost_min);
}
