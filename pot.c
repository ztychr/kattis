#include <stdio.h>

int main() {

    int lines, num, base, power, sum, total = 0;

    scanf("%d", &lines);

    for (int i = 1; i <= lines; i++) {

        sum = 1;

        scanf("%d", &num);
        
        power = num % 10;
        base = num / 10;

        while(power-- > 0) {
            sum *= base;
        }

        total += sum;
    }

    printf("%d", total); 

    return 0;   
}