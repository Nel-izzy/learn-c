#include <stdio.h>

int main(){
  int a, b, c;
  printf("Enter a value for a: ");
  scanf("%d", &a);
  printf("Enter a value for b: ");
  scanf("%d", &b);
  c = a/b;
  printf("a divided by b is %d\n", c);
}
