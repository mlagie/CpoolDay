#include <stdio.h>

void print_char(char c);
void print_number(int num);

int strLen(char* str){
    int isWord = 1;
    int nWordLength = 0;

    while (isWord == 1)
    {
        if(str[nWordLength] == '\0'){
            isWord = 0;
            break;
        }

        nWordLength ++;
    }

    return nWordLength;
}

char* my_replace_char(char *origin, char toFind, char toReplace){
    int target = 0;

    while (target < strLen(origin))
    {
        if(origin[target] == toFind){
            print_char(toReplace);
        }
        else{
            print_char(origin[target]);
        }

        target ++;
    }
}