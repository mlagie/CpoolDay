void print_char(char c);

void my_print_n_acsii(int howMany){
    if(howMany >= 0 && howMany <= 94) return;
    {
        for(int i = 33; i < (33 + howMany); i++)
        {
            print_char(i);
        }
    }
}