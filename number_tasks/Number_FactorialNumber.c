//
// Created by Abakli on 06/08/2022.
//

#include <stdio.h>

static long factorialNumber(long number){

    if (number == 0){
        return 1;
    }
    return number * factorialNumber(number - 1);
}

static long factorialNumber2(int number){

    long factor = 1;

    while (number >= 2){

        factor *= number;
        number--;
    }
    return factor;
}
/*
int main(){

    printf("%d", factorialNumber2(10));
}*/