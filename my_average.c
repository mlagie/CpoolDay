#include <stdio.h>

float my_average(int *grades, int count){
    float value = 0;

    for(int i = 0; i<count; i++){
        value += grades[i];
    }

    return value / count;
}

int main(void){
    int list[5] = {10, 17, 6, 14, 20};
    printf("%f\n", my_average(list, 5));
    return 0;
}