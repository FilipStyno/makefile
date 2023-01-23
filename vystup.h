#include <stdio.h>
#define ENTER '\n'

float input(const char *text) {
    float number;
    int countOfChar;
    do {
        printf("Type %s: ", text);
        scanf("%f", &number);
        countOfChar = 0;
        while (getchar() != ENTER) {
            countOfChar++;
        }
        if (countOfChar != 0) {
            printf("You haven't typed a real number. Try again. \n");
        } else if (number <= 0) {
            printf("The number has to be positive. Try again. \n");
        }
    } while (countOfChar != 0 || number <= 0);
    return number;
}