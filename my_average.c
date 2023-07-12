#include <stdio.h>

float my_average(int *grades, int count){
    float value = 0;

    for(int i = 0; i<count; i++){
        value += grades[i];
    }

    return value / count;
}