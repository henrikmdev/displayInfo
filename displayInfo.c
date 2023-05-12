#include <stdio.h>

int main(void) {
    int numberOfDogs = 5;
    double myMoney = 100.51;
    char myName[10] = "Henrik\0";
    printf("\n===============================================\n");
    printf("Hello, world!\n");
    printf("\tThis is a cool tutorial!\n");
    printf("\tThe number of dogs is %d.\n", numberOfDogs);
    printf("\tMy bank balance: $%lg.\n", myMoney);
    printf("\tMy name is %s.\n", myName);
    printf("===============================================\n");
    return 0;
}