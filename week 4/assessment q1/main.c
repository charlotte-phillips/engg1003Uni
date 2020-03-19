#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 0, x = 1;
    printf("%d %d\n", n, x);

    while(n < 6){
        if ((x % 2) == 0){
            x = (x * 3) + 1;
        }
        else {
            x = x + 3;
        }
        n++;
        printf("%d %d\n", n, x);
    }

    return 0;
}
