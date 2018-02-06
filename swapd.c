#include<stdio.h>
int main()
{
    int n = 32;
    int m = 67;
    printf(" value of n=%d m=%d before swapping", n, m);
  {
    n = n ^ m;
    m = n ^ m;
    n = n ^ m;
    printf("value of n=%d m=%d after swapping", n, m);
  }
    return 0;
}
