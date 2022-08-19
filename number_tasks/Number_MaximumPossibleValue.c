//
// Created by Abakli on 19/08/2022.
//


#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

static int maximumPossibleValue(int number){

    if (number == 0){
        return 50;
    }

    char numberToString[(int) (floor(log10(abs(number))) + 1)];

    if (number > 0){

        itoa(number, numberToString, 10);

        for (int i = 0; i < sizeof numberToString; ++i) {

            if (numberToString[i]-48 < 5){

                char sub[i];

                if (i == 0){

                    char temp[sizeof numberToString + 1];
                    temp[0] = '5';
                    memcpy(&temp[1], &numberToString, sizeof numberToString);
                    return atoi(temp);

                } else{

                    memcpy(sub, &numberToString, i+1);
                    numberToString[i-1] = '5';
                }

                char result[strlen(sub) + strlen(numberToString) - 1];

                for (int j = 0; j < sizeof(result) / sizeof(result[0]); ++j){

                    if (j < sizeof sub){

                        result[j] = sub[j];
                    } else{

                        result[j] = numberToString[j-1];
                    }
                }
                return atoi(result);
            }
        }
        char temp[sizeof numberToString + 1];
        temp[sizeof temp - 1] = '5';
        memcpy(temp, &numberToString, sizeof numberToString);
        return atoi(temp);

    } else if (number < 0){

        itoa(-number, numberToString, 10);

        for (int i = 0; i < sizeof numberToString; ++i) {

            if (numberToString[i]-48 > 5){

                char sub[i];

                if (i == 0){

                    char temp[sizeof numberToString + 1];
                    temp[0] = '5';
                    memcpy(&temp[1], &numberToString, sizeof numberToString);
                    return -atoi(temp);

                } else{

                    memcpy(sub, &numberToString, i+1);
                    numberToString[i-1] = '5';
                }

                char result[strlen(sub) + strlen(numberToString) - 1];

                for (int j = 0; j < sizeof(result) / sizeof(result[0]); ++j){

                    if (j < sizeof sub){

                        result[j] = sub[j];
                    } else{

                        result[j] = numberToString[j-1];
                    }
                }
                return -atoi(result);
            }
        }
        char temp[sizeof numberToString + 1];
        temp[sizeof temp - 1] = '5';
        memcpy(temp, &numberToString, sizeof numberToString);
        return -atoi(temp);

    }
}
/*
int main(){

    printf("%d", maximumPossibleValue(222));
    printf("\n");
    printf("%d", maximumPossibleValue(-222));
    printf("\n");
    printf("%d", maximumPossibleValue(0));
}*/