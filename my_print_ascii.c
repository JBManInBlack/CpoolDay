void my_print_ascii(void)
{
    for(int i=0, i<127, i++)
    {
        print_char("%d %c \n",i,i);
    }
}

int main(void)
{
    my_print_ascii();
    return 0;
}