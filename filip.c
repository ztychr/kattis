#include <stdio.h>

int main() {

  int num1, num2, revNum1 = 0, revNum2 = 0, single;
  
  scanf("%d %d", &num1, &num2);
  
  while (num1 != 0) {
    single = num1 % 10;
    revNum1 = revNum1 * 10 + single;
    num1 /= 10;
  }
  
  while (num2 != 0) {
    single = num2 % 10;
    revNum2 = revNum2 * 10 + single;
    num2 /= 10;
  }
  
  if (revNum1 > revNum2) {
    printf("%d", revNum1);
  }
  else {
    printf("%d", revNum2);
  }
  
  return 0;
  
}
