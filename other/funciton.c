#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putstr(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        write(1, &str[i], 1);
    }
}

void print_int_array(int *dizi, int l)
{
    int i;

    i = 0;
    while (i < l)
    {
        printf("%d ",dizi[i++]);
    }
    printf("\n");
}

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while(str[i] != '\0')
    {
        i++;
    }

    return (i);
}