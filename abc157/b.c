#include <stdio.h>

int main(void)
{
  int A[3+1][3+1];
  for (int i=0; i<3; i++) for (int j=0; j<3; j++) scanf("%d", &A[i][j]);

  int N;
  scanf("%d", &N);

  int B[N+1];
  for (int i=0; i<N; i++) scanf("%d", &B[i]);

  for (int i=0; i<3; i++) for (int j=0; j<3; j++) {
    for (int k=0; k<N; k++) {
      if (A[i][j] == B[k]) A[i][j] = 0;
    }
  }

  int flag = 0;
  for (int i=0; i<3; i++) {
    if (A[0][0]==0 && A[1][1]==0 && A[2][2]==0) flag = 1;
    if (A[0][2]==0 && A[1][1]==0 && A[2][0]==0) flag = 1;
    if (A[i][0]==0 && A[i][1]==0 && A[i][2]==0) flag = 1;
    if (A[0][i]==0 && A[1][i]==0 && A[2][i]==0) flag = 1;
  }

  if (flag) {
    printf("Yes\n");
  } else {
    printf("No\n");
  }
}

