#include <stdio.h>
#include "vystup.h"
#define ENTER '\n'


int next() {
    printf("Press enter to continue \n");
    if (getchar() == ENTER) {
        return 1;
    } else {
        return 0;
    }
}

float input(const char *text);

int main() {
    float deposit, interestRate;
    do {
        deposit = input("a deposit");
        interestRate = input("an interest rate");
        printf("Your new balance on your bank account is %.2f. \n",
               deposit + deposit / 100 * interestRate);
    } while (next());

    return 0;
}
