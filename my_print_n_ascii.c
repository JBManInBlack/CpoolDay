#include "print_char.h"

void my_print_n_ascii(n)
{
    for(int i=33; i<n; i++)
    {
        print_char(i);
    }
}
