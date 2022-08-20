//
// Created by Abakli on 20/08/2022.
//


#include <stdio.h>

static int fibonacci(int number){

    int j = 0, z = 1;

    for (int i = 1; i < number; ++i){

        z += j;

        j = z - j;
    }
    return z;
}
/*
int main(){

    printf("%d", fibonacci(10));
}*/