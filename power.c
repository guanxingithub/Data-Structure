#include <stdio.h>

int pow1(int m, int n)
{
  if (n == 0) return 1;
  return pow1(m,n-1) * m;
}
int pow2(int m, int n)
{
  if (n== 0) return 1;
  if ( n%2 == 0) {
    return pow2(m*m, n/2);
  } else {
    return m * pow2(m*m, (n-1)/2);
  }
}
int pow3(int m, int n)
{
  if (n==0) return 1;
  if (n%2 == 0) {
    int r = pow3(m, n/2);
    return r*r;
  } else {
    int r = pow3(m, (n-1)/2);
    return m * r * r;
  }
}
int main() 
{
  int r;
  r = pow1(2,9);
  printf("%d ", r);
  4 = pow2(2,9);
  printf("%d ", r);
  return 0;
}
