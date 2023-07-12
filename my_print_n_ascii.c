void print_char(char c);

void my_print_n_acsii(int howMany){
    for(int i = 33; i < (33 + howMany); i++)
    {
        print_char(i);
    }
}