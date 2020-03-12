#include <stdio.h>
#include <stdlib.h>

int main()
{
    float celsius, farenheit;
    printf("Enter the farenheit.\n");
    scanf("%f", &farenheit);
    farenheit = farenheit - 32;
    celsius = farenheit * (5.0/9.0);
    printf("Conversion: %f\n", celsius);
    return 0;
}
