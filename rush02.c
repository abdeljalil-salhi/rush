#include "ft_putchar.c"

void    printer(int x, char start, char middle, char end)
{
    int i;

    i = 1;
    while (i <= x)
    {
        if (i == 1)
            // We are at the start of the line
            ft_putchar(start);
        else if (i == x)
            // We are at the end of the line
            ft_putchar(end);
        else
            // We are in the middle of the line
            ft_putchar(middle);
        i++;
    }
    ft_putchar('\n');
}

void    tester(int x, int y, int j)
{
    // We call the printer function for the header
    if (j == 1)
        printer(x, 'A', 'B', 'A');
    // We call the printer function for the footer
    else if (j == y)
        printer(x, 'C', 'B', 'C');
    // We call the printer function for the body
    else
        printer(x, 'B', ' ', 'B');
}

void    rush(int x, int y)
{
    int j;

    j = 1;
    // Iterate through all the lines
    while (j <= y)
    {
        tester(x, y, j);
        j++;
    }
}