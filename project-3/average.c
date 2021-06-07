#include <stdio.h>

int main(){
  int a, b, c, d;
  printf("Enter first number: ");
  scanf("%d", &a);
  printf("Enter second number: ");
  scanf("%d", &b);
  printf("Enter third number: ");
  scanf("%d", &c);
  d = (a + b + c) / 3;
  printf("The average of the  three numbers is %d\n", d);
}
