void print_char(char c);
//void print_number(int number);

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

void my_print_revert(char* c){
    for(int i = strLen(c); i > 0; i--){
        print_char(c[i-1]);
    }
}