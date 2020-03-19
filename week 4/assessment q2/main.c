#include <stdio.h>
#include <stdlib.h>

int main(){
    int n = 0;
    float A = 2.8, B = 0.2, C = 0, Bmax = 0;
    printf("%d %f %f %f\n", n, A, B, C);

    while(n < 9){
            C = C + (0.4 * B);
            B = (0.6 * B) + (0.1 * A);
            A = 0.9 * A;
            n++;
            printf("%d %f %f %f\n", n, A, B, C);
            if(B > Bmax){
                Bmax = B;
            }

    }
    printf("%f", Bmax);

    return 0;
}
