#include <stdio.h>

int main()
 {
  int n, k;
  int first = -1, last = -1;
  int l;
  scanf("%d", &n);
  scanf("%d", &k);
  for (int i = 0; i < n; i++)
  {      scanf("%d", &l);
    if(l == k)
    {
      if(first == -1) first = i;
      last = i;
    }
  }
  printf("%d %d\n", first, last);
  return 0;
}
