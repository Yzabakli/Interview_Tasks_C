//
// Created by Abakli on 19/08/2022.
//

#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdio.h>

static int isArmstrong(int number){

    char numberToString[(int) (floor(log10(abs(number))) + 1)];

    itoa(number, numberToString, 10);

    int power = (int) strlen(numberToString);

    int sum = 0;

    for (int i = 0; i < power; ++i) {

        sum += pow((int) numberToString[i] - 48, (int) power);
    }

    if (sum == number){
        return 1;
    } else return 0;
}
/*
int main(){

    int x = 153;
    if (isArmstrong(x) == 1)
        printf("True\n");
    else
        printf("False\n");

    x = 1253;
    if (isArmstrong(x) == 1)
        printf("True\n");
    else
        printf("False\n");

    return 0;
}*/