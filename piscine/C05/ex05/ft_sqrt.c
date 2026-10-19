#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>

int other(int nb, int i)
{
    i = 1;
    while(i * i <= nb)
    {
        return(nb / ft_sqrt(nb, i - 1))
    }
}
int ft_sqrt(int nb)
{
    int i;

    if(nb < 0)
        return(0);
    i = 0;
    while(i * i <= nb)
        return(nb / ft_sqrt(n));
    return(i);
}

int main(int argc, char **argv)
{
    if(argc == 2)
        printf("%d\n", ft_sqrt(atoi(argv[1])));
    return(0);
}