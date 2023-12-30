#include <stdio.h>

int main(void)
{
  int N, M, C;
  scanf("%d %d %d", &N, &M, &C);

  int B[M+1];
  for (int i=0; i<M; i++) scanf("%d", &B[i]);

  int A[N+1][M+1];
  for (int i=0; i<N; i++) for (int j=0; j<M; j++) scanf("%d", &A[i][j]);

  int count = 0;
  for (int i=0; i<N; i++) {
    int sum = C;
    for (int j=0; j<M; j++) sum += A[i][j]*B[j];
    if (sum > 0) count++;
  }

  printf("%d\n", count);
}
