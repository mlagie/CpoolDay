void print_char(char c);

void my_print_square(int size, char c){
    if(size > 0){
        for(int x = 0; x < size; x++){
            for(int y = 0; y < size; y++){
                print_char(c);
            }
            print_char('\n');
        }
    }
    else{
        print_char(' ');
    }
}
