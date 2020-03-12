#include <stdio.h>
#include <stdlib.h>

int main()
{
    double counter=0, threeHapp=0, a, b;

    while (counter < 1000) {
        a = rand() % 7 + 1;
        b = rand() % 7 + 1;
    if (a == 3.0 || b == 3.0) {
        threeHapp = threeHapp + 1;
    }
        counter = counter+1;
    }
    threeHapp = threeHapp / counter;
printf("%f", threeHapp);
}
