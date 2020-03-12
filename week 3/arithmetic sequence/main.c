#include <stdio.h>
#include <stdlib.h>

int main()
{   float xnm1 = 2, xn = 4, k = 2, sum = 0;
    int count = 1;
    printf("0 %f\n", xnm1);
    if (k >-1 && k < 1) {
        while (count < 100 && xn > 0.0001){
        xn = xnm1 * k;
        printf("%d %f\n", count, xn);
        k = xn / xnm1;
        xnm1 = xn;
        count++;
        }
    }
    else if (k <=1 || k >=1) {
        while (count < 10 ){
        xn = xnm1 * k;
        printf("%d %f\n", count, xn);
        k = xn / xnm1;
        xnm1 = xn;
        count++;
        }
    }
 return 0;


}
