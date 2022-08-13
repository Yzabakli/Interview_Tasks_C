//
// Created by Abakli on 02/08/2022.
//

#include <stdio.h>

struct Map{

};

static void divide(int dividend, int divisor){

    int quotient = 0;

    while (dividend >= divisor){

        dividend -= divisor;
        quotient++;
    }
    printf("Quotient: %d", quotient);
    printf(" Remainder: %d", dividend);
}
/*
int main(){

    divide(75, 4);
    return 0;
}*/