#include <stdio.h>

int main(){
  int a, b, c, d, e, f, g;
  printf("Enter a value for a: ");
  scanf("%d", &a);
  printf("Enter a value for b: ");
  scanf("%d", &b);
 c = a+b;
 d = a - b;
 e = a * b;
 f = a / b;
 g = a%b;
  printf("The value of a plus b is %d\n", c);
  printf("The value of a minus b is %d\n", d);
  printf("The value of a multiplied by b is %d\n", e);
  printf("The value of a divided by b is %d\n", f);
  printf("The remainder of a divided by b is %d\n", g);
}
