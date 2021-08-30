#include <stdio.h>

int main() {

  int mb, months, usage, sum = 0;

  scanf("%d %d", &mb, &months);
  
  for (int i = 1; i <= months; i++) {

    scanf("%d", &usage);
    sum += (mb - usage);
  } 

  sum += mb; 
  printf("%d", sum); 
  
  return 0;   
}
