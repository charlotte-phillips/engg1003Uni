#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number, loopCount;
    double squareRoot, temporary;
    printf("Please enter your number.\n");
    scanf("%d", &number);

    squareRoot = number / 2;
    temporary = 0;
    loopCount = 0;
        do {
                temporary = squareRoot;
                squareRoot = (number / temporary + temporary) / 2;
                loopCount++;
        } while (squareRoot != temporary && loopCount < 100000);

    printf("The square root of %d is %f", number, squareRoot);
return 0;
}
