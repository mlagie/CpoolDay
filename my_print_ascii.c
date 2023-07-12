void print_char(char c);

void my_print_ascii(void){
    for(int c = 33; c <= 126; ++c){
        print_char(c);
    }
}

int main(void){
    my_print_ascii();
    return 0;
}