//
// Created by Abakli on 01/08/2022.
//

#include <stdio.h>

void sumAllDigitsUntilOneDigit(int n){

    while (n > 9){

        int digit = n, sum = 0;

        while (digit > 0){

            sum += digit % 10;
            digit /= 10;
        }
        printf( "%d", sum);
        printf("\n");

        n = sum;
    }
}
/*
int main(){

    sumAllDigitsUntilOneDigit(797897);
}
 */