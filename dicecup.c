#include <stdio.h>

int main() {

    int d1, d2, cen, diff, start, stop;

    scanf("%d %d", &d1, &d2);

    cen = (d1 + d2) / 2;
    
    if (d1 > d2) {
        diff = (d1 - d2) / 2;
    }
    else {
        diff = (d2 - d1) / 2;
    }

    start = ++cen - diff;
    stop = ++cen + diff;

    if((d1 + d2) % 2 != 0) {
        stop++;
    }

    for(int i = start; i < stop; i++){
        printf("%d\n", i);
    }

    return 0;
    
}