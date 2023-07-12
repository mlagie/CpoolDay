#include <stdio.h>

int my_get_char_repeat(char toFind, const char *to_search){
    int n = 0;

    if(to_search == NULL) return 0;

    for(int i = 0; to_search[i] != '\0'; i++){
        if(to_search[i] == toFind) n++;
    }

    return n;
}