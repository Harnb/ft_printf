#include "ft_printf.h"
#include <stdio.h>

int main()
{
    char *py;
    py = "abc";
    ft_printf("toto: %s", &py);
    printf("toto: %s", &py);

}