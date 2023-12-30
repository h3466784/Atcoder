#include <stdio.h>

int main(void)
{
  int N, A, B;
  scanf("%d %d %d", &N, &A, &B);

  char S[N+1];
  scanf("%s", S);

  int all_qua = 0;
  int for_qua = 0;
  for (int i=0; i<N; i++) {
    switch (S[i]) {
    case 'a':
      if (all_qua < A+B) {
        printf("Yes\n");
        all_qua++;
      } else {
        printf("No\n");
      }
      break;
    case 'b':
      if ((all_qua < A+B) && (for_qua < B)) {
        printf("Yes\n");
        all_qua++;
        for_qua++;
      } else {
        printf("No\n");
      }
      break;
    case 'c':
      printf("No\n");
      break;
    }
  }
}
