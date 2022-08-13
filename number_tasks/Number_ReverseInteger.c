//
// Created by Abakli on 05/08/2022.
//

#include <stdio.h>

static int reverseInteger(int num){

    int temp = 0;

    while (num != 0){

        temp = temp * 10 + num % 10;
        num /= 10;
    }
    return temp;
}
/*
int main(){

    printf("%d", reverseInteger(564873659));
}*/