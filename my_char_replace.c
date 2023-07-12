#include <stdio.h>

void print_char(char c);
void print_number(int num);

int my_strlen(char* str){
    int nWordLength = 0;
    for(int i = 0; str[i] != '\0'; i++){
        nWordLength++;
    }

    return nWordLength;
}

char* my_replace_char(char *origin, char toFind, char toReplace){
    int target = 0;

    for(int i = 0; origin[i] != '\0'; i++){
        if(origin[target] == toFind){
            origin[target] = toReplace;
        }
    }

    return origin;
}